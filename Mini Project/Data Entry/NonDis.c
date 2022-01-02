#include<stdio.h>

struct Dis
{
  int item_id;
  char item_name[20];
  int gst;
  float buy_price; 
};

int main()
{
	struct Dis d1;
	FILE *fp;
	fp=fopen("WSNonDis.txt","a");
	printf("Enter item_id:");
	scanf("%d",&d1.item_id);
	fflush(stdin);
	printf("Enter item_name:");
	gets(&d1.item_name);
	fflush(stdin);
	printf("Enter gst:");
	scanf("%d",&d1.gst);
	fflush(stdin);
	printf("Enter buy_price:");
	scanf("%f",&d1.buy_price);
	
	fwrite(&d1,sizeof(d1),1,fp);
	fclose(fp);
	free(&d1);
	return 0;
}
