class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> records;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int op1 = records.top();
                records.pop();
                int op2 = records.top();
                records.pop();
                records.push(op2);
                records.push(op1);
                records.push(op1+op2);
            }
            else if(ops[i]=="D"){
                int top = records.top();
                records.push(2*top);
            }
            else if(ops[i]=="C"){
                records.pop();
            }
            else records.push(stoi(ops[i]));
        }
            int sum=0;
        while(!records.empty()){
            sum+= records.top();
            records.pop();
        }
            return sum;
        
    }
};