class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
      int i,j;
      vector<string>t;
      for(i=0;i<12;i++){
          bitset<4> hour(i);
          for(j=0;j<60;j++){
              bitset<6> min(j);
              if(hour.count()+min.count()==turnedOn){
                  string s=to_string(i);
                  string st=(j<10)?":0":":";
                  st=st+to_string(j);
                  t.push_back(s+st);
              }
          }
      }
        return t;
    }
};
