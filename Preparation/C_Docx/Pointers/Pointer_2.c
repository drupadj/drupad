char acBuffer[10] = “aticleworld”;
char *pc1, *pc2;

Assigning address of first  and third elements of acBuffer1 to pc1 and pc2.

pc1 = &acBuffer[0]; // Address of first element

pc2 = &acBuffer[2]; // Address of third element

Now we can compare the pointers if required.

if( pc1 > pc2) // Legal statement
{

}

But pointers comparison is invalid when pointers point to the 2 different memory blocks.

char acBuffer1[10] = “aticle”;
char acBuffer2[10] = “world”;
char *pc1, *pc2;

Assining the address of acBuffer1 to pc1 and acBuffer2 to the pc2.

pc1 = acBuffer1;
pc2 = acBuffer2;

In that situation pointer comparison is invalid.
if( pc1 > pc2) // illegal statement
{
}
