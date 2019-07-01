
#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stk[50];
void push(char c)
{
    top++;
    stk[top]=c;

}
void pop()
{
    if(top>=0)
    {


        top--;
    }
}
int isContained(char *w,char c)
{
    int i,f=0;
    for(i=0;w[i]!='\0';i++)
    {
        if(w[i]==c)
        {
            f=1;
            break;
        }
    }
    return f;
}
int main ()
{
 	int i, state = 0,choice=0,opt;
 	char str[50],w[10];

 	printf("1.Enumeration of DFA\n");
 	printf("2.Enumeration of PDA\n");
 	printf("Enter option: ");
 	scanf("%d",&opt);
 	if(opt==1)
    {


	do
	{
		state=0;

		printf("\n1.  starts and ends with 'a'\n2.  ends with 'bb'\n3.  has odd numbers of b's\n");
		printf("4.  start with 'a' and end with 'b'\n5.  has substring as '110'\n6.  has number of a's are divisible by 3\n");
		printf("7.  has odd a's and odd b's\n8.  has even number of b's and even number of a's\n9.  has atleast 2 0's\n");
		printf("10. Exit\nChoice:");

		scanf("%d",&choice);
		if(choice >0 && choice <=9)
		{
			printf ("Enter the string: ");
			scanf ("%s", str);
			printf("\nInitially string is in state 0");
		}
		switch(choice)
		{
			case 1:
				for (i = 0; str[i] != '\0'; i++)
				{
					switch (state)
					{
					case 0:
						if (str[i] == 'a')
						state = 1;
						else
						state = 2;
						break;
					case 1:
						if (str[i] == 'a')
							state = 1;
						else
							state = 3;
						break;
					case 2:
						if (str[i] == 'a')
							state = 2;
						else
							state = 2;
						break;
					case 3:
						if (str[i] == 'a')
							state = 1;
						else
							state = 3;
						break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 1)
					printf ("\nIt is in final state.\n");
				else
					printf ("\nIt is not in final state.\n");
			break;
			case 2:
				for (i = 0; str[i] != '\0'; i++)
			   	{
					switch (state)
					{
						case 0:
				 			if (str[i] == 'a')
								state = 0;
							else
								state = 1;
							break;
			         	case 1:
				 			if (str[i] == 'a')
								state = 0;
				 			else
								state = 2;
							break;
			       		case 2:
				  			if (str[i] == 'a')
								state = 0;
							else
								state = 2;
							break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 2)
					printf("\nIt is in final state.\n");
				else
			  		printf ("\nIt is not in final state.\n");
			 break;
			 case 3:
			 	for (i = 0; str[i] != '\0'; i++)
				{
					switch (state)
					{
						case 0:
							if (str[i] == 'a')
								state = 0;
							else
								state = 1;
							break;
						case 1:
							if (str[i] == 'a')
								state = 1;
							else
								state = 0;
							break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 1)
					printf ("\nIt is in final state.\n");
				else
					printf ("\nIt is not in final state.\n");
			break;
			case 4:
				for (i = 0; str[i] != '\0'; i++)
				{
					switch (state)
					{
						case 0:
							if (str[i] == 'a')
								state = 1;
							else
								state = 2;
							break;
						case 1:
							if (str[i] == 'a')
								state = 1;
							else
								state = 3;
							break;
						case 2:
							if (str[i] == 'a')
								state = 2;
							else
								state = 2;
							break;
						case 3:
							if (str[i] == 'a')
								state = 1;
							else
								state = 3;
							break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 3)
					printf ("\nIt is in final state.\n");
				else
					printf ("\nIt is not in final state.\n");
				break;
				case 5:
					for (i = 0; str[i] != '\0'; i++)
					{
						switch (state)
						{
							case 0:
								if (str[i] == '1')
									state = 1;
								else
									state = 0;
								break;
							case 1:
								if (str[i] == '1')
									state = 2;
								else
									state = 0;
								break;
							case 2:
								if (str[i] == '1')
									state = 2;
								else
									state = 3;
								break;
							case 3:
								if (str[i] == '1')
									state = 3;
								else
									state = 3;
								break;
						}
						printf("\nThe string is in state %d",state);
					}
					if (state == 3)
						printf ("\nIt is in final state.\n");
					else
						printf ("\nIt is not in final state.\n");
				break;
				case 6:
					for (i = 0; str[i] != '\0'; i++)
					{
						switch (state)
						{
							case 0:
					  			if (str[i] == 'a')
									state = 1;
								else
									state = 4;
								break;
				    		case 1:
					 			if (str[i] == 'a')
									state = 2;
								else
									state = 5;
								break;
				        	case 2:
					  			if (str[i] == 'a')
									state = 3;
				                else
									state = 6;
								break;
							case 3:
					  			if (str[i] == 'a')
									state = 1;
								else
									state = 3;
								break;
							case 4:
					  			if (str[i] == 'a')
									state = 1;
								else
									state = 4;
								break;
							case 5:
					  			if (str[i] == 'a')
									state = 2;
								else
									state = 5;
								break;
							case 6:
					  			if (str[i] == 'a')
									state = 3;
								else
									state = 6;
								break;

						}
						printf("\nThe string is in state %d",state);
				   	}
				   	if (state == 3)
				 		printf ("\nIt is in final state.\n");
				 	else
				 		printf ("\nIt is not in final state.\n");
				break;
				case 7:
					for (i = 0; str[i] != '\0'; i++)
					{
						switch (state)
						{
							case 0:
								if (str[i] == 'a')
									state = 1;
								else
									state = 3;
							break;
							case 1:
								if (str[i] == 'a')
									state = 0;
								else
									state = 2;
							break;
							case 2:
								if (str[i] == 'a')
									state = 3;
								else
									state = 1;
							break;
							case 3:
								if (str[i] == 'a')
									state = 2;
								else
									state = 0;
							break;
						}
						printf("\nThe string is in state %d",state);
					}
					if (state == 2)
						printf ("\nIt is in final state.\n");
					else
						printf ("\nIt is not in final state.\n");
				break;
				case 8:
				for (i = 0; str[i] != '\0'; i++)
				{
					switch (state)
					{
						case 0:
							if (str[i] == 'a')
								state = 1;
							else
								state = 3;
							break;
						case 1:
							if (str[i] == 'a')
								state = 0;
							else
								state = 2;
							break;
						case 2:
							if (str[i] == 'a')
								state = 3;
							else
								state = 1;
							break;
						case 3:
							if (str[i] == 'a')
								state = 2;
							else
								state = 0;
							break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 0)
					printf ("\nIt is in final state.\n");
				else
					printf ("\nIt is not in final state.\n");
			break;
			case 9:
				for (i = 0; str[i] != '\0'; i++)
				{
					switch (state)
					{
						case 0:
							if (str[i] == '0')
								state = 1;
							else
								state = 0;
						break;
						case 1:
							if (str[i] == '0')
								state = 2;
							else
								state = 1;
						break;
						case 2:
							if (str[i] == '0')
								state = 2;
							else
								state = 2;
						break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state ==2)
					printf ("\nIt is in final state.\n");
				else
					printf ("\nIt is not in final state.\n");
			break;
			case 10:
				exit(0);
			default:
				printf("\n!!!!Wrong Input!!!!\nPlease enter choices between 1 to 10");
		}
	}while(1==1);
    }
    else if(opt==2)
    {
        do
        {
            state=0;
            printf("\n1. L = a^n*b^n, n>=1 \n2. L = a^n*b^(2*n), n>=1 \n3. L = a^n*b^m*c^(m+n), n>=1\n");
            printf("4. L = a^n*b^(3*n+2), n>=1\n5. L = a^(3*n)*b^n,n>=1\n6. L = a^i*b^j*c^k*d^l|j=k,i=l,i,j,k,l>=1\n");
            printf("7. L = a^3*b^n*c^n, n>=0\n8. L = {w: na(w)=2nb(w)|na=no of a's}\n9. L = wCw^T|w:(E)*\n");
            printf("10. Exit\nChoice:");
            scanf("%d",&choice);
            if(choice >0 && choice <9)
            {
                printf ("Enter the string: ");
                scanf ("%s", str);
                printf("\nInitially string is in state 0");
            }
            switch(choice)
            {
                case 1:
                    stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
						if (str[i] == 'a'&&stk[top]=='z')
                            push(str[i]);
						else if(str[i] == 'a'&&stk[top]=='a')
                            push(str[i]);
                        else if(str[i] == 'b'&&stk[top]=='a')
                        {
                            pop();
                            state=1;
                        }

						break;
					case 1:
						if (str[i] == 'b'&&stk[top]=='a')
							pop();

						break;


					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 1&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
			 case 2:
                    stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
						if (str[i] == 'a'&&stk[top]=='z')
                            push(str[i]);
						else if(str[i] == 'a'&&stk[top]=='a')
                            push(str[i]);
                        else if(str[i] == 'b'&&stk[top]=='a')
                        {

                            state=1;
                        }
                        break;
					case 1:
						if (str[i] == 'b'&&stk[top]=='a')
                        {
                           pop();
                           state=2;
                        }
						break;
                    case 2:
                        if(str[i] == 'b'&&stk[top]=='a')
                        {

                            state=1;
                        }
                        break;
					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 2&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
			 case 3:
                    stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
						if (str[i] == 'a'&&stk[top]=='z')
                            push(str[i]);
						else if(str[i] == 'a'&&stk[top]=='a')
                            push(str[i]);
                        else if(str[i] == 'b'&&stk[top]=='a')
                            push(str[i]);
                        else if(str[i] == 'b'&&stk[top]=='b')
                            push(str[i]);
                        else if(str[i] == 'c'&&stk[top]=='b')
                        {
                            pop();
                            state=1;
                        }


                        break;
                    case 1:
						if (str[i] == 'c'&&stk[top]=='b')
                        {
                           pop();
                           state=1;
                        }
                       else if (str[i] == 'c'&&stk[top]=='a')
                        {
                           pop();
                           state=1;
                        }
						break;

					}
					printf("\nThe string is in state %d",state);
				}
				if (state == 1&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
			case 4:
                    stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
						if (str[i] == 'a'&&stk[top]=='z')
                            push(str[i]);
						else if(str[i] == 'a'&&stk[top]=='a')
                            push(str[i]);
                        else if(str[i] == 'b'&&stk[top]=='a')
                            state=1;
                        break;
                    case 1:
                        if(str[i] == 'b'&&stk[top]=='a')
                            state=2;
                        break;
                    case 2:
                        if(str[i] == 'b'&&stk[top]=='a')
                        {
                            pop();
                            state=3;
                        }
                        break;
                    case 3:
                        if(str[i] == 'b'&&stk[top]=='a')
                            state=1;
                        else if(str[i] == 'b'&&stk[top]=='z')
                            state=4;
                        break;
                    case 4:
                        if(str[i] == 'b'&&stk[top]=='z')
                            state=5;
                        break;
                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 5&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
            case 5:
                stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
					    if (str[i] == 'a'&&stk[top]=='z')
                            state=1;
                        else if (str[i] == 'b'&&stk[top]=='a')
                        {
                            pop();
                            state=3;
                        }

                        break;
                    case 1:
                        if (str[i] == 'a'&&stk[top]=='z')
                            state=2;
                        break;
                    case 2:
                        if (str[i] == 'a'&&stk[top]=='z')
                        {

                            push(str[i]);
                            state=0;
                        }

                        break;
                    case 3:

                        if(str[i]=='b'&&stk[top]=='a')
                        {
                            pop();
                            state=3;
                        }
                        break;


                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 3&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
            case 6:
                stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
					    if (str[i] == 'a'&&stk[top]=='z')
                            push(str[i]);
                        else if (str[i] == 'a'&&stk[top]=='a')
                            push(str[i]);
                        else if (str[i] == 'b'&&stk[top]=='a')
                        {
                            push(str[i]);
                            state=1;
                        }
                        break;
                    case 1:
                        if (str[i] == 'b'&&stk[top]=='b')
                            push(str[i]);
                        else if (str[i] == 'c'&&stk[top]=='b')
                        {
                            pop();
                            state=2;
                        }
                        break;
                    case 2:
                        if (str[i] == 'c'&&stk[top]=='b')
                        {
                            pop();
                            state=2;
                        }
                        else if (str[i] == 'd'&&stk[top]=='a')
                        {
                            pop();
                            state=3;
                        }
                        break;
                    case 3:
                        if (str[i] == 'd'&&stk[top]=='a')
                        {
                            pop();
                            state=3;
                        }
                        break;
                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 3&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
            case 7:
                    stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
					    if (str[i] == 'a'&&stk[top]=='z')
                            state=1;
                        break;
                    case 1:
                        if (str[i] == 'a'&&stk[top]=='z')
                            state=2;
                        break;
                    case 2:
                        if (str[i] == 'a'&&stk[top]=='z')
                            state=3;
                        break;
                    case 3:
                        if (str[i] == 'b'&&stk[top]=='z')
                            push(str[i]);
                        else if (str[i] == 'b'&&stk[top]=='b')
                            push(str[i]);
                        else if (str[i] == 'c'&&stk[top]=='b')
                        {
                            pop();
                            state=4;
                        }
                        break;
                    case 4:
                        if (str[i] == 'c'&&stk[top]=='b')
                            pop();
                        break;
                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 4&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
            case 8:
                   stk[top]='z';
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
					    if (str[i] == 'a'&&stk[top]=='z')
                                state=1;
                        else if (str[i] == 'a'&&stk[top]=='a')
                            state=1;
                        else if (str[i] == 'b'&&stk[top]=='a')
                        {
                            pop();
                            state=0;
                        }
                        break;
                    case 1:
                        if (str[i] == 'a'&&stk[top]=='z')
                        {
                            push(str[i]);
                            state=0;
                        }
                        else if (str[i] == 'a'&&stk[top]=='a')
                        {
                            push(str[i]);
                            state=0;
                        }
                        break;
                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 0&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
            case 9:
                    stk[top]='z';
                    printf("\nEnter inputs: ");
                    scanf("%s",w);
                    printf ("Enter the string: ");
                    scanf ("%s", str);
                    printf("\nInitially string is in state 0");
                    for(i=0;str[i]!='\0';i++)
                    {

                    switch (state)
					{
					case 0:
                        if (stk[top]=='z'&&isContained(w,str[i]))
                            push(str[i]);
                        else if (isContained(w,stk[top])&&isContained(w,str[i]))
                            push(str[i]);
                        else if (isContained(w,stk[top])&&str[i]=='c')
                            state=1;
                        else if (str[i] == 'c'&&stk[top]=='z')
                            state=1;
                        break;
                    case 1:
                        if (stk[top]==str[i])
                            pop();
                        break;
                    }
					printf("\nThe string is in state %d",state);
				}
				if (state == 1&&stk[top]=='z')
					printf ("\nIt is in final state.\nThe string is Accepted\n");
				else
					printf ("\nIt is not in final state.\nThe string is rejected\n");
			break;
			case 10:
				exit(0);
			default:
				printf("\n!!!!Wrong Input!!!!\nPlease enter choices between 1 to 10");

        }

    }while(1==1);
    }
	return 0;
}
