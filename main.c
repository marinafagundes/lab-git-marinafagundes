{\rtf1\ansi\ansicpg1252\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red183\green111\blue179;\red23\green23\blue23;\red194\green126\blue101;
\red70\green137\blue204;\red212\green214\blue154;\red202\green202\blue202;\red140\green211\blue254;\red167\green197\blue152;
\red205\green173\blue106;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c77255\c52549\c75294;\cssrgb\c11765\c11765\c11765;\cssrgb\c80784\c56863\c47059;
\cssrgb\c33725\c61176\c83922;\cssrgb\c86275\c86275\c66667;\cssrgb\c83137\c83137\c83137;\cssrgb\c61176\c86275\c99608;\cssrgb\c70980\c80784\c65882;
\cssrgb\c84314\c72941\c49020;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs29\fsmilli14667 \cf2 \cb3 \expnd0\expndtw0\kerning0
#include \cf4 <stdio.h>\
\cf2 #include \cf4 <math.h>\
\pard\pardeftab720\partightenfactor0
\cf5 void \cf6 somatoria\cf7 (\cf5 int \cf8 \cb3 x\cf7 \cb3 , \cf5 int \cf8 \cb3 y\cf7 \cb3 )\{\
\cf5    int \cf8 \cb3 i\cf7 \cb3 ;\
\cf5    long int \cf8 \cb3 soma \cf7 \cb3 = \cf9 \cb3 0\cf7 \cb3 ;\
\pard\pardeftab720\partightenfactor0
\cf2    for\cf7 (\cf8 \cb3 i \cf7 \cb3 = \cf8 \cb3 x\cf7 \cb3 ; \cf8 \cb3 i \cf7 \cb3 <= \cf8 \cb3 y\cf7 \cb3 ; \cf8 \cb3 i \cf7 \cb3 = \cf8 \cb3 i \cf7 \cb3 + \cf9 \cb3 1\cf7 \cb3 )\{\
\pard\pardeftab720\partightenfactor0
\cf8 \cb3        soma \cf7 \cb3 = \cf8 \cb3 soma \cf7 \cb3 + \cf8 \cb3 i\cf7 \cb3 ;\
   \}\
\pard\pardeftab720\partightenfactor0
\cf6    printf\cf7 (\cf4 "\cf10 \\n\cf4 A somat\'f3ria \'e9 \cf8 \cb3 %ld\cf10 \cb3 \\n\cf4 "\cf7 ,\cf8 \cb3 soma\cf7 \cb3 );\
\}\
\cf5 int \cf6 main\cf7 (\cf5 void\cf7 ) \{\
\cf6    printf\cf7 (\cf4 "\cf10 \\n\\n \cf4 :::::::::  INICIO DO PROGRAMA ::::::: \cf10 \\n\\n\cf4 "\cf7 );\
\cf6    printf\cf7 (\cf4 "\cf10 \\n\\n\cf4 Digite o n\'famero x: "\cf7 );\
\cf6    scanf\cf7 (\cf4 "\cf8 \cb3 %d\cf4 \cb3 "\cf7 ,&x);\
\cf6    printf\cf7 (\cf4 "\cf10 \\n\\n\cf4 Digite o n\'famero y: "\cf7 );\
\cf6    scanf\cf7 (\cf4 "\cf8 \cb3 %d\cf4 \cb3 "\cf7 ,&y);\
\pard\pardeftab720\sa240\partightenfactor0
\cf6 \cb3 soma\cf7 \cb3 (x,y); 
\fs24 \cf11 \cb1 \
\pard\pardeftab720\sa240\partightenfactor0

\fs29\fsmilli14667 \cf2 \cb3 return \cf9 0\cf7 ; \} 
\fs24 \cf11 \cb1 \
}