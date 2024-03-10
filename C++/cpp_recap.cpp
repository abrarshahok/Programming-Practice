#include <bits/stdc++.h>

int main() {

   // Vector

   std::vector<int> vec;
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.pop_back();

   std::cout << "Size: " << vec.size() << std::endl;
   std::cout << "Empty: " << (vec.empty() ? "Yes" : "No") << std::endl;

   for (auto it = vec.begin(); it != vec.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   // Deque
   std::deque<int> dq;
   dq.push_back(1);
   dq.push_front(2);
   dq.pop_back();
   dq.pop_front();

   std::cout << "Size: " << dq.size() << std::endl;
   std::cout << "Empty: " << (dq.empty() ? "Yes" : "No") << std::endl;

   // List
   std::list<int> lst;
   lst.push_back(1);
   lst.push_front(2);
   lst.pop_back();
   lst.pop_front();

   std::cout << "Size: " << lst.size() << std::endl;
   std::cout << "Empty: " << (lst.empty() ? "Yes" : "No") << std::endl;

   // Set
   std::set<int> mySet = { 3, 1, 4, 1, 5 };
   mySet.insert(2);
   mySet.erase(4);

   for (int num : mySet) {
      std::cout << num << " ";
   }
   std::cout << std::endl;

   // Map
   std::map<std::string, int> myMap;
   myMap["apple"] = 5;
   myMap["banana"] = 3;

   std::cout << "Apple count: " << myMap["apple"] << std::endl;

   // Unordered set
   std::unordered_set<int> mySet = { 3, 1, 4, 1, 5 };
   mySet.insert(2);
   mySet.erase(4);

   for (int num : mySet) {
      std::cout << num << " ";
   }
   std::cout << std::endl;

   // Unordered Map
   std::unordered_map<std::string, int> myMap;
   myMap["apple"] = 5;
   myMap["banana"] = 3;

   std::cout << "Apple count: " << myMap["apple"] << std::endl;

   // std::sort()
   std::vector<int> vec = { 3, 1, 4, 1, 5 };
   std::sort(vec.begin(), vec.end());

   for (int num : vec) {
      std::cout << num << " ";
   }
   std::cout << std::endl;

   // Set Intersection
   std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
   std::vector<int> vec2 = { 3, 4, 5, 6, 7 };
   std::vector<int> intersection;

   std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(intersection));

   for (int num : intersection) {
      std::cout << num << " ";
   }
   std::cout << std::endl;

   // Iterators
   std::vector<int> vec = { 1, 2, 3, 4, 5 };

   for (auto it = vec.begin(); it != vec.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   // Pair
   std::pair<int, std::string> myPair = std::make_pair(42, "hello");
   std::cout << "First: " << myPair.first << ", Second: " << myPair.second << std::endl;

   return 0;
}