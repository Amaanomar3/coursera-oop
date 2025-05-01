#include <iostream>

int main()
{	
	while (true)
	{

		std::cout << "1: Print help" << std::endl;
		std::cout << "2: Print exchange stats" << std::endl;
		std::cout << "3: Place and ask" << std::endl;
		std::cout << "4: Place a bid" << std::endl;
		std::cout << "5: Print wallet" << std::endl;
		std::cout << "6: Continue" << std::endl;

		std::cout << "===============" << std::endl;
		
		int userOption;
		std::cin >> userOption;

		switch (userOption)
		{
			case 1:
				std::cout << "Help - choose options from menu" << std::endl;
				std::cout << "and follow the on screen instructions." << std::endl;
				break;
			case 2:
				std::cout << "Available stats will be displayed here" << std::endl;
				break;
			case 3:
				std::cout << "You can place an ask here soon" << std::endl;
				break;
			case 4:
				std::cout << "You can place your bids here soon" << std::endl;
				break;
			case 5:
				std::cout << "Your wallet is empty" << std::endl;
				break;
			case 6:
				std::cout << "Continuing to next time step" << std::endl;
				break;
			default:
				std::cout << "Invalid input please try again!" << std::endl;
				break;

		}
	}

	return 0;
}

