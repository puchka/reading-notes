// read and write a recipient first name
#include "../../std_lib_facilities.h"

int main()
{
  cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";
  string recipient_first_name;
  string friend_name;
  char friend_sex = '0';
  int age;
  cin >> recipient_first_name;
  cout << "Please enter the first name of a friend (followed by 'enter'):\n";
  cin >> friend_name;
  cout << "Is " << friend_name << " male or female? (m/f):\n";
  cin >> friend_sex;
  cout << "Please enter the age of the recipient (followed by 'enter'):\n";
  cin >> age;
  if (age <= 0 || age >= 110)
    simple_error("you're kidding!");
  cout << "Dear " << recipient_first_name << ",\n";
  cout << endl;
  cout << "\tHow are you? I am fine. I miss you.\n";
  cout << "Have you seen " << friend_name << " lately?\n";
  if (friend_sex == 'm')
    cout << "If you see " << friend_name << " please ask him to call me.\n";
  else
    cout << "If you see " << friend_name << " please ask her to call me.\n";
  cout << "I hear you just had a birthday and you are " << age << " years old.\n";
  if (age <= 12)
    cout << "Next year you will be " << age + 1 << ".\n";
  if (age == 17)
    cout << "Next year you will be able to vote.\n";
  if (age >= 70)
    cout << "I hope you are enjoying retirement.\n";
  cout << "Yours sincerely,\n\n\n";
  cout << "Marius\n";
}
