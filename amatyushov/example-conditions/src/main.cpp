#include <iostream>
#include <string>
int main()
{

    int x = 0;
    std::cout << "Enter x: ";
    std::cin >> x;

    if (x > 50)
    {
        std::cout << "x is greater than 50 \n";
    }
    else if (x < 30)
    {
        std::cout << "x is less than 30 \n";
    }

    std::string str;
    std::cout << "Enter string: "; // не хуй вводить слово "хуй"
    std::cin >> str;
	
	if (str.empty())
	{
        std::cout << "You entering empty string" << std::endl;
	}
	else
	{
		std::cout << "You entering: " << str << std::endl;
	}

	
    std::cout << "End of Program" << "\n";
	return 0;
}