class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> record;

        for (int i=0;i<operations.size();i++){
            try {
                int x=stoi(operations[i]);
                record.push_back(x);
            }catch(invalid_argument& e){
                if (operations[i][0]>='0' && operations[i][0]<='9'  ){
                record.push_back(operations[i][0]);
            }
            else if ( operations[i][0]=='+'){
                  record.push_back(record.back()+record[record.size()-2]);
            }
            else if (operations[i][0]=='C'){
                record.pop_back();
            }
            else 
                record.push_back(record.back()*2);
            }
            
        }
        
        int sum=0;
        for(auto x:record)
           sum+=x;
        return sum;
    }
};