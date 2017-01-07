// Cipher 26 task from codefights.com
// Encryption algorithm is as follows:
//      Letters from 'a' to 'z' correspond to numbers 0 to 25 resp
//      The number corresponding to the i-th letter of the encrypted message is then equal to the sum of numbers corresponding to the first i letters of the initial unencrypted messsage modulo 26
//
// Task: Given an input string message that was encrypted using the above algorithm, implement an algorithm to decrypt it
// 
// 
// Example test case:
//      message = "taiaiaertkixquxjnfxxdh" should decrypt to "thisisencryptedmessage"

#include <iostream>

std::string cipher26(std::string message) {
    
    std::string plaintext = "";
    plaintext = plaintext + message[0];
    int temp1 = (int)message[0] - 97;
    int temp2;
    
    for(int k = 1;k<message.length();++k)
    {
        temp2 = (int)message[k] - 97;
        plaintext=plaintext+ (char)((temp2-temp1 +26)%26 + 97);
        temp1 = temp2;
    }
    return plaintext;
}

// One example test case

int main(){

    std::string message = "taiaiaertkixquxjnfxxdh";

    std::cout << cipher26(message) << std::endl;
}


