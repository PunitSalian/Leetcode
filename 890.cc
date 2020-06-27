class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
          vector<string> res;
          int size = pattern.length();

          for(int i = 0; i < words.size();i++){
              
              if(words[i].length() == size){
                    int j  = 0;
                    map<char,char> maping;
                    set<char> mappedchar; 
                    for(; j < size; j++){
                        
                         if(maping.find(pattern[j]) != maping.end()){
                              if(words[i][j] == maping[pattern[j]] ){
                                  continue;
                              }else{
                                  break;
                              }
                         }
                         if(mappedchar.find(words[i][j]) == mappedchar.end()){
                             maping[pattern[j]] = words[i][j];
                             mappedchar.insert( words[i][j]);
                         }else{
                             break;
                         }   
                        

                         
                    }
                    
                    if(j == size){
                        res.push_back(words[i]);
                    }
                  
                    
              }
              
          }
        
          return res;
    }
};
