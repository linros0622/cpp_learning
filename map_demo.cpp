#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  map<string,int>config;
  config["speed"]=100;
  config["turn_rate"]=50;

  cout<<"速度:"<<config["speed"]<<endl;

  if(config.find("speed")!=config.end()){
    cout<<"找到了speed"<<endl;
  }

  for(const auto&pair:config){
    cout<<pair.first<<"="<<pair.second<<endl;
  }
  return 0;
}
