class Solution {
public:
    //crezz
    map<string,int> mpp;
    int helper(string& formula, int s, int multiply) {
        int n = formula.size();
        for (int i = s; i < n;) {
            if (formula[i]=='(') {
                int j=i+1, count=0, start=i+1;
                while(j<n && (count>0 || formula[j]!=')')){
                    if(formula[j]=='(')count++;
                    if(formula[j]==')')count--;
                    j++;
                }
                int multStart = j + 1;
                while(multStart<n && isdigit(formula[multStart]))multStart++;
                int factor=(multStart == j+1)?1:stoi(formula.substr(j+1,multStart-(j+1)));
                helper(formula, start, multiply*factor);
                i=multStart;
            } 
            else{
                if(isupper(formula[i])){
                    int j=i;
                    string atom ="";
                    string cnt ="";
                    atom+=formula[i];
                    j++;
                    while (j<n && islower(formula[j])) {
                        atom+=formula[j];
                        j++;
                    }
                    while(j<n && isdigit(formula[j])) {
                        cnt+=formula[j];
                        j++;
                    }
                    i=j;
                    if(cnt=="")cnt="1";
                    mpp[atom]+=(stoi(cnt))*multiply;
                } 
                else{
                    return i;
                }
            }
        }
        return n;
    }

    string countOfAtoms(string formula) {
        mpp.clear();
        helper(formula,0,1);
        string result ="";
        for (auto &it:mpp) {
            result+=it.first;
            if (it.second>1)result+=to_string(it.second);
        }
        return result;
    }
};