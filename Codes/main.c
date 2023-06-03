#include <16f876a.h>
#fuses HS,NOWDT
#use delay(clock=20Mhz)

int a,b,c,d,e,f,i;
int const sira[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
int const siranokta[10] = {0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xe7};

void main(){
   set_tris_b(0x00);
   set_tris_c(0x00);
   while(true){
      for(a=0;a<10;a++){
         for(b=0;b<10;b++){
            for(c=0;c<6;c++){
               for(d=0;d<10;d++){
                  for(e=0;e<6;e++){
                     for(f=0;f<10;f++){
                        for(i=0;i<59;i++){                 //82
                            output_c(0x3e);
                            output_b(sira[f]);
                            delay_ms(2);
                            output_c(0x3d);
                            output_b(sira[e]);
                            delay_ms(2);
                            output_c(0x3b);
                            output_b(siranokta[d]);
                            delay_ms(2);
                            output_c(0x37);
                            output_b(sira[c]);
                            delay_ms(2);
                            output_c(0x2f);
                            output_b(siranokta[b]);
                            delay_ms(2);
                            output_c(0x1f);
                            output_b(sira[a]);
                            delay_ms(2);
                            }}}}}}}
   }
}
