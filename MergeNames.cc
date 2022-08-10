#include <iostream>
#include <vector> 
#include <algorithm>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> g1; 
  
    for(const auto& i: names1) {  
      g1.push_back(i);  
    }
     for(const auto& j: names2){
        g1.push_back(j);
     } 
  sort( g1.begin(), g1.end() );
  g1.erase( unique( g1.begin(), g1.end() ), g1.end() );
  return g1;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif 
 
