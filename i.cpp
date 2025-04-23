#include <iostream>
#include <string>
#include <cstdint>
#include <map>


std::u16string lookup(const char* c);

int main( int argc, char** argv) {
  //first check if there is any argument
  if( argc > 1 ){
    std::u16string str=lookup(argv[1]);
    //std::cout << argv[1] << ":";
    for (char16_t c : str) {
      std::wcout << wchar_t(c);
    }
    std::cout << std::endl;
  }
  return 0;
}

std::u16string lookup(const char* c){
  std::map<std::string, std::u16string> zhuyinMap;
  zhuyinMap["b"] = u"\u3105";
  zhuyinMap["p"] = u"\u3106";
  zhuyinMap["m"] = u"\u3107";
  zhuyinMap["f"] = u"\u3108";
  zhuyinMap["d"] = u"\u3109";
  zhuyinMap["t"] = u"\u310A";
  zhuyinMap["n"] = u"\u310B";
  zhuyinMap["l"] = u"\u310C";
  zhuyinMap["g"] = u"\u310D";
  zhuyinMap["k"] = u"\u310E";
  zhuyinMap["h"] = u"\u310F";
  zhuyinMap["j"] = u"\u3110";
  zhuyinMap["q"] = u"\u3111";
  zhuyinMap["x"] = u"\u3112";
  zhuyinMap["zh"] = u"\u3113";
  zhuyinMap["ch"] = u"\u3114";
  zhuyinMap["sh"] = u"\u3115";
  zhuyinMap["r"] = u"\u3116";
  zhuyinMap["z"] = u"\u3117";
  zhuyinMap["c"] = u"\u3118";
  zhuyinMap["s"] = u"\u3119";
  zhuyinMap["a"] = u"\u311A";
  zhuyinMap["o"] = u"\u311B";
  zhuyinMap["e"] = u"\u311C";
  zhuyinMap["ê"] = u"\u311D";
  zhuyinMap["ai"] = u"\u311E";
  zhuyinMap["ei"] = u"\u311F";
  zhuyinMap["ao"] = u"\u3120";
  zhuyinMap["ou"] = u"\u3121";
  zhuyinMap["an"] = u"\u3122";
  zhuyinMap["en"] = u"\u3123";
  zhuyinMap["ang"] = u"\u3124";
  zhuyinMap["eng"] = u"\u3125";
  zhuyinMap["er"] = u"\u3126";
  zhuyinMap["i"] = u"\u3127";
  zhuyinMap["u"] = u"\u3128";
  zhuyinMap["ü"] = u"\u3129";

  zhuyinMap["ia"] = u"\u3127\u311A";
  zhuyinMap["ya"] = u"\u3127\u311A";
  
  std::u16string zhuyin = zhuyinMap[c];

  return zhuyin; 
}
