#include<iostream>
using namespace std;

class times
{
	int sec,min,hour,s=0;
	
	public :
		
		void setter()
		{
			cout << "enter hour : ";
			cin >> hour;
			cout << "enter minute : ";
			cin >> min;
			cout << "enter second : ";
			cin >> sec;
		}
		
		void watch()
		{
			if(sec>=60)
			{
				int temp_min;
				temp_min = sec / 60; 
				min = min + temp_min;
				s=sec % 60; 
			}
			if(sec>=60)
			{
				int temp_hour;
				temp_hour = min / 60; 
				hour = hour + temp_hour;
				min=min % 60; 
			}
		}
		
		void getter()
		{
			cout << "hour : " << hour << " minutes : " << min << " seconds : " << s;
		}
};

int main()
{
	times t1;
	
	t1.setter();
	t1.watch();
	t1.getter();
	
	
	return 0;
}
