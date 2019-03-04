// This program was wtitten for Fujitsu Software development Internship.
// Written by Zahidul Amin 
// Email: zahidford@gmail.com 
// Phone : 514 709 2443
// Linkedin: https://www.linkedin.com/in/zahidul-amin/

// Declaring Important Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

 // Function to Space before and after
 
const string WHITESPACE = " \n\r\t\f\v";
    string ltrim(const string& s)
    {
   size_t start = s.find_first_not_of(WHITESPACE);
   return (start == string::npos) ? "" : s.substr(start);
    }

    std::string rtrim(const string& s)
    {
   size_t end = s.find_last_not_of(WHITESPACE);
   return (end == string::npos) ? "" : s.substr(0, end + 1);
    }

    string trim(const string& s)
    {
  return rtrim(ltrim(s));
}


int main () {
  // Initializing variables and vectors
  size_t pos{};
  string last_name{};
  string first_name{};
  string number{};
  string full_name{};
  string line{};
  ifstream myfile ("employees.dat");
  static vector<string > number_vector;
  vector<string> last_name_vector;
  vector<string> first_name_vector;
  
  // Reading File Contents:
  if (myfile.is_open())
  {
    while(getline(myfile, line))
    {
      
       // Extracting Numbers from Lines
        for (size_t i {0}; i < line.length(); ++i)
        {
         if (line[i] == '#')
        {
             line.clear();
         }
             
         else if (isdigit (line[i]))
             number += line[i];
 
         // Extracting Full Name from lines
         
         else if (isalpha(line[i])  || line[i] == ' ') 
             full_name += line[i];
      }

     //Removing Unnessary space character
       
       full_name = trim(full_name);
       
     // Extracting First name from String
     
       pos = full_name.find(' ');
       first_name = full_name.substr(0, pos) ;

      // Getting Last Name from String
      
      for (size_t k =0; k< full_name.length(); ++k ) 
       {
       if (full_name[k] == ' ' )
           for (size_t j=k+1; j <(full_name.length()); ++j)
            last_name +=  full_name[j];
      }
    
      // Putting Numbers in Vector
       if (number != "")
       number_vector.push_back(number);
        
      // Putting First name in Vector
       if (first_name != "")
       first_name_vector.push_back(first_name);
        
      // Putting Last name to vector
        
       if (last_name != "")
       last_name_vector.push_back(last_name);
    
      //Clear string for next loop!
      number.clear();
      full_name.clear();
      first_name.clear();
      last_name.clear();
    }
    
        // Soerting by First Name
    for(size_t j{0}; j < number_vector.size(); ++j)
    {
            for(size_t k{0}; k < number_vector.size()-1; ++k)
            {
                
                if (number_vector[k] > number_vector[k+1])
                {
                    swap(number_vector[k],number_vector[k+1]);
                    swap(first_name_vector[k],first_name_vector[k+1]);
                    swap(last_name_vector[k],last_name_vector[k+1]);
                }
            }
    }
    // Output from array after sorting by employee number
    cout << "Processing by employee number..." << endl;
    for(size_t j{0}; j < number_vector.size(); ++j)
    {
        cout << number_vector[j]<< "," << first_name_vector[j] << " " << last_name_vector[j] << endl;
    }
    // Sorting by Last Name
            
    for(size_t j{0}; j < last_name_vector.size(); ++j)
        {
            for(size_t k{0}; k < last_name_vector.size()-1; ++k){
                
                if (last_name_vector[k] > last_name_vector[k+1]){
                    swap(number_vector[k],number_vector[k+1]);
                    swap(first_name_vector[k],first_name_vector[k+1]);
                    swap(last_name_vector[k],last_name_vector[k+1]);
            }
        }
    }
        // Multiple Lines skipped
    for (int i = 0; i < 2; ++i)
        cout << "\n";
            
    // Output from array after sorting by last name
    
    cout  << "Processing by last (family) Name..." << endl;
    
    for(size_t j{0}; j < number_vector.size(); ++j)
    {
        cout << number_vector[j]<< "," << first_name_vector[j] << " " << last_name_vector[j] << endl;
    }

    myfile.close();
  }

  else cout << "Unable to open file"<<endl; 

  return 0;
}