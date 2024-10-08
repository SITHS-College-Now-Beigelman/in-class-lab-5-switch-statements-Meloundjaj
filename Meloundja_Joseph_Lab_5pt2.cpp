
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double hotspotGB;
	double lowQuality = 43.2;
	double normalQuality = 72;
	double highQuality = 115.2;
    int userInput;

	cout << "Please input the amout of GB for your monthly hotspot plan" << endl;
	cin >> hotspotGB;

	cout << lowQuality << " per hour for low quality" << endl;
	cout << normalQuality << " per hour for normal quality" << endl;
	cout << highQuality << " per hour for high quality" << endl;

    cout << "Would you like to download low, normal or high? For low inpt one, for normal input two and for high input three" << endl;
    cin>> userInput;

    switch(userInput)
    {
        case 1:
        cout << "if you used low quality, you would have " << (1000 * hotspotGB)/lowQuality
	     <<  " hours!" << endl;
        break;
        
        case 2:
        cout << "if you used normal quality, you would have " << (1000 * hotspotGB)/normalQuality
	     << " hours!" << endl;
        break;

        case 3:
        cout << "if ypu used high quality, you would have " << (1000 * hotspotGB)/highQuality
	     << " hours!" << endl;
        break;

        default:
        cout << "not an option, please remeber for low inpt one, for normal input two and for high input three" << endl;
       



    }

	
	
	
	/*Please input the amout of
	for your monthly hotspot plan
	40
	43.2 per hour for low quality
	72 per hour for normal quality
	115.2 per hour for high quality
	if you used low quality, you would have 925.926 hours!
	you used normal quality, you would have 555.556 hours!
	if ypu used high quality, you would have 347.222 hours!*/


	return 0;
}