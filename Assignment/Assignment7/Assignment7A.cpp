#include <iostream>

using namespace std;

class SVGRect
{
  private:
    float width;
    float height;
    string fill_color;
    string stroke_color;
    float stroke_width;
    float offset_x;
    float offset_y;

    public:
    SVGRect()
    {
      width = 1;
      height = 1;
      fill_color = "#0000FF";
      stroke_color = "#0F0F0F";
      stroke_width = 1;
      offset_x = 0;
      offset_y = 0;
    }

    //parameterised constructor
    SVGRect(float width, float height, string fill_color, string stroke_color)
    {
      this->width = width;
      this->height = height;
      this->fill_color = fill_color;
      this->stroke_color = stroke_color;
      this->stroke_width = 1;
      this->offset_x = 0;
      this->offset_y = 0;
    }

    //methods and fxns
    bool set_dimensions(float w, float h)
    {
      //if inputs are positive set width and height to those values
      if (w > 0 && h > 0)
      {
        this->width = w;
        cout << "Rectangle updated!\n";
        return true;
      }
      else
      {
        cout << "Invalid input – rectangle not changed.\n";
        return false;
      }
    }

    void set_offset(float x, float y)
    {
      this->offset_x = x;
      this->offset_y = y;

      cout << "Rectangle updated!\n";
    }

    bool set_fill_and_stroke(string str1, string str2, float stroke_w)
    {
      if (stroke_w > 0)
      {
        this->fill_color = str1;
        this->stroke_color = str2;
        this->stroke_width = stroke_w;

        cout << "Rectangle updated!\n";

        return true;
      }
      else
      {
        return false;
      }
    }

    void print_XML()
    {
      cout << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<svg\n";
      cout << "\txmlns=\"http://www.w3.org/2000/svg\"\n";
      cout << "\txmlns:svg=\"http://www.w3.org/2000/svg\">\n";
      cout << "<rect\n\tstystyle=\"fill:" << this->fill_color << "; stroke:" << this->stroke_color << "; stroke-width:" << this->stroke_width <<"\"\n";
      cout << "\twidth=\"" << this->width << "\"\n";
      cout << "\theight=\"" << this->height << "\"\n";
      cout << "\tx=\"" << this->offset_x << "\"\n";
      cout << "\ty=\"" << this->offset_y << "\"\n";
      cout << "</svg>\n";
    }
};

int main() 
{
  float stroke_width, width, height, offsetX, offsetY;
  string fill, stroke;
  int option;
  
  cout << "[SVG Class]\n";

  cout << "Rectangle width: ";
  cin >> width;

  cout << "Rectangle height: ";
  cin >> height;

  cout << "Fill color: ";
  cin >> fill;

  cout << "Stroke color: ";
  cin >> stroke;

  SVGRect rect(width, height, fill, stroke);

  do 
  {
    cout << "\nWhat would you like to do?\n";
    cout << "1) Change the Rectangle size\n";
    cout << "2) Update the Fill and Strike settings\n";
    cout << "3) Move the Rectangle\n";
    cout << "4) Print valid XML\n";
    cout << "5) Quit\n";

    cout << "Option: ";
    cin >> option;

    switch (option)
    {
      case 1:
        cout << "\nEnter a new width: ";
        cin >> width;
        
        cout << "Enter a new height: ";
        cin >> height;

        rect.set_dimensions(width, height);
        
        break;

      case 2:
        cout << "\nEnter a new fill color: ";
        cin >> fill;

        cout << "Enter a new stroke color: ";
        cin >> stroke;

        cout << "Enter a new stroke width: ";
        cin >> stroke_width;

        rect.set_fill_and_stroke(fill, stroke, stroke_width);
        
        break;

      case 3:
        cout << "\nEnter a new offset x: ";
        cin >> offsetX;

        cout << "Enter a new offset y: ";
        cin >> offsetY;

        rect.set_offset(offsetX, offsetY);

        break;

      case 4:

        rect.print_XML();

        break;

      case 5:

        cout << "\nClosing!\n";
        
        break;

      default:
        cout << "\nInvalid option. Please try again.\n";
    }
      
  }
  while (option != 5);
}