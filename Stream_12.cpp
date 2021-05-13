#include<iostream>
#include <sstream>
#include <strstream>



int main(){

    char strArr[] = "Soheb Khan is great";

    char stringArr[] = "TurboCharging";

    std::strstream strStream(strArr,19);

    std::stringstream stringStream(std::string(stringArr,19));

    std::cout<<"Before Modification strArr= "<<strArr<<" & stringArr= "<<stringArr<<std::endl;
    strStream.flush();
    strStream << "Fifa 2012 is nice";


    stringStream << "Sometimes its sucks";


    std::cout<<"After Modification strArr= "<<strArr<<" & stringArr= "<<stringArr<<std::endl;

    return 0;


}
