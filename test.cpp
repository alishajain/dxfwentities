#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "write_entities.h"

int main(int argc, char **argv)
{
	Dxf_write_entities d1;
	d1.DxfBegin();

	std::string sel_str, c, ly;

	ifstream f;
	f.open("lc1.txt", ios::in);
	
	while(!f.eof())
	{
		std::getline(f, sel_str);
		//c=std::tolower(sel_str);
		if(sel_str.compare("line")==0)
		{
			float x1, x2, y1, y2;

			cout<<"******** LINE ********"<<endl;

			f>>x1>>y1>>x2>>y2>>ly;

			d1.Dxf_draw_line(x1,y1,x2,y2,ly);
		}
		else if( sel_str.compare("rectangle") == 0)
		{
			float x1, y1, x2, y2, x3, y3, x4, y4, l, b;

			cout<<"******** RECTANGLE ********"<<endl;

			f>>x1>>y1>>l>>b>>ly;

				x2=l+x1;
				y2=y1;
				x3=l+x1;
				y3=b+y1;
				x4=x1;
				y4=b+y1;

			d1.Dxf_draw_rectangle(x1, y1, x2, y2, x3, y3, x4, y4, ly);
		}
		else if( sel_str.compare("circle") == 0)
		{
			float rad, x, y;

			cout<<"******** CIRCLE **********"<<endl;

			f>>x>>y>>rad>>ly;
			d1.Dxf_draw_circle(rad, x, y, ly);
		}
	}
	d1.DxfEnd();
	return 0;
}
