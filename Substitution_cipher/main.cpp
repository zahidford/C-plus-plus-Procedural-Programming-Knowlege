#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cipher {"ZXCVBNMLKJHGFDSAQWERTYUIOPpoiuytrewqasdfghjklmnbvcxz"};
    cout << "Please Enter Your Secret Message" << endl;
    string secret_message;
    string encrypted_message;
    string decrypted_message;
    int seek_message;
    getline(cin,secret_message);
    for (size_t i{0}; i<secret_message.length();++i){
        
        size_t seek_message = alphabet.find(secret_message.substr(i,1));
       
 if (seek_message != string::npos)
        encrypted_message = encrypted_message + cipher.substr(seek_message,1);
       else
                encrypted_message = encrypted_message + secret_message.substr(i,1);

        
    }
     cout <<"Encrypted message is \n" <<encrypted_message<<endl;
     //Decrypting message
     for (size_t j{0}; j<encrypted_message.length();++j){
       size_t seek_message2 = cipher.find(encrypted_message.substr(j,1));
           if (seek_message2 != string::npos)
       decrypted_message = decrypted_message + alphabet.substr(seek_message2,1);
       else 
          decrypted_message = decrypted_message + encrypted_message.substr(j,1);
       
   }
    cout <<"Decrypted message is \n" <<decrypted_message<<endl;
     
    return 0;
}