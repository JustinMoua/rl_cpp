#include <iostream>
#include <string>

char charDowngradeLetterGrade(char charRequestedLetterGrade);

int main(){
    std::string strFirstName;
    std::string strLastName;
    char charGrade;
    int intAge;

    std::cout << "What is your first name? ";
    std::getline(std::cin, strFirstName);
    //std::cin >> strFirstName; 
    
    std::cout << "What is your last name? ";
    //std::cin >> strLastName; //Seems to be a problem here. This input seems to have "skipped" (more than likely it is that the newline was still in the buffer and was read. Will have to fix later)
    std::getline(std::cin, strLastName);

    std::cout << "What letter grade do you deserve? ";
    std::cin >> charGrade;

    std::cout << "What is your age? ";
    std::cin >> intAge;

    std::cout << std::endl;

    std::cout << "Name: " << strLastName << ", " << strFirstName << std::endl
              << "Grade: " << charDowngradeLetterGrade(charGrade) << std::endl
              << "Age: " << intAge;

    return 0;
}

char charDowngradeLetterGrade(char charRequestedLetterGrade){
    
    char charGivenLetterGrade;

    if ((char)tolower(charRequestedLetterGrade) == 'a'){
        charGivenLetterGrade = 'B';
    }else if (((char)tolower(charRequestedLetterGrade) == 'b')){
        charGivenLetterGrade = 'C';
    }else if(((char)tolower(charRequestedLetterGrade) == 'c')){
        charGivenLetterGrade = 'D';
    }else{
        charGivenLetterGrade = '0';
    }
    
    return charGivenLetterGrade;
}