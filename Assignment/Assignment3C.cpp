#include <iostream>

using namespace std;

int main()
{
  int channels, BPC;
  string image_format;
  
  
  cout << "[Guess the Color Mode]\n";

  //Channels
  cout << "How many channels does your image have? ";
  cin >> channels;

  
    

  switch (channels)
    {  
      //Channel 1
      case 1:
        cout << "It is a Grayscale image.\n";
        break;

      //Channel 2
      case 2:
        cout << "It is a Grayscale image.\n";
        break;

      //Channel 3
      case 3:
        cout << "It is an RGB image.\n";
        break;

      //Channel 4
      case 4:

         //BPC value
        cout << "What is its BPC value? ";
        cin >> BPC;
        
        switch (BPC)
          {
            //BPC values = 8
            case 8:
              //Image format
              cout << "What image format is it? ";
              cin >> image_format;
              
              //BMP Format
              if (image_format == "BMP")
              {
                cout << "It is a Grayscale image.\n";
              }
                
              //BMP Format
              else if (image_format == "PNG")
              {
                cout << "It is an RGB image.\n";
              }

              //TIFF Format  
              else if (image_format == "TIFF")
              {
                cout << "It is a CMYK image.\n";
              }

              //Invalid Format  
              else
              {
                cout << "This is invalid input. Please run the program again.\n";
              }
              break;

            //BPC values = 16
            case 16:
              //Image format
              cout << "What image format is it? ";
              cin >> image_format;
              
              //BMP Format
              if (image_format == "BMP")
              {
                cout << "This image’s color mode can not be determined.\n";
              }
                
              //BMP Format
              else if (image_format == "PNG")
              {
                cout << "It is an RGB image.\n";
              }

              //TIFF Format  
              else if (image_format == "TIFF")
              {
                cout << "It is a CMYK image.\n";
              }

              //Invalid Format  
              else
              {
                cout << "This is invalid input. Please run the program again.\n";
              }
              break;

            //BPC values = 32
            case 32:
              cout << "It is an RGB image.\n";
              break;

            default:
              cout << "This is invalid input. Please run the program again.\n";
          }
        break;

      //Channel 5
      case 5:
        cout << "It is a CMYK image.\n";
        break;  
      
      default:
        cout << "This is invalid input. Please run the program again.\n";
    }  
    
}