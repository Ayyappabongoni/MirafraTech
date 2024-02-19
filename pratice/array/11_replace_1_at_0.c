/*replace with 1 at 0 in value
  ip- 2040
  op- 2141
 */
#include<stdio.h>
int main()
{
	int a=204507806;
	int result=0,reminder=0,i=10;
	printf("input %d\n",a);  
	/*place one at 0's position*/
	while(a!=0)
	{
		reminder=a%10;
		if(reminder==0)
		{
			reminder=1;
			result=(result*i)+reminder;
		}
		else{

			result=(result*i)+reminder;
		}
		a=a/10;
	}

	a=result;
	result=0;
	/*reverse the output*/

	while(a!=0)
	{

		reminder=a%10;
		result=(result*i)+reminder;
		a=a/10;
	}
	printf("output %d\n",result);
}
