// Stolen Lunch task from codefights.com
// 
// Task: Decrypt the string note that was encrypted as follows:
//      characters a through j are replaced with 0 through 9 resp, and vice versa
//
// Example: note = "you'll n4v4r 6u4ss 8t: cdja" should return the string "you'll never guess it: 2390"

#include <iostream>

std::string stolenLunch(std::string note) {

    for(int k = 0; k<note.length(); ++k)
    {
        int x = (int)note[k];//convert to ascii code
        
        if(x > 47 && x < 58) //0 through 9 ascii
        {
            note[k] = (char)(x + 49);
        }
        else if(x > 96 && x < 107) //a through j ascii
        {
            note[k] = (char)(x - 49);
        }
    }
    
    return note;
}

// One test case from the comments above
int main(){

    std::string note = "you'll n4v4r 6u4ss 8t: cdja";

    std::cout << stolenLunch(note) << std::endl;

    return 0;
}
