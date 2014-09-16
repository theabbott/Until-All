/*
 *  Main.mm
 *
 *  Boot code for NME.
 *
 */

#include <stdio.h>

extern "C" const char *hxRunLibrary();
extern "C" void hxcpp_set_top_of_stack();
	

 
     extern "C" int std_register_prims();
 

 
     extern "C" int regexp_register_prims();
 

 
     extern "C" int zlib_register_prims();
 

 

 

 

 

 

 

 
     extern "C" int nme_register_prims();
 

 
     extern "C" int std_register_prims();
 

 
     extern "C" int regexp_register_prims();
 

 
     extern "C" int zlib_register_prims();
 

 

 

 

 

 

 

 
     extern "C" int nme_register_prims();
 

 
     extern "C" int ads_register_prims();
 

 
     extern "C" int gamecenter_register_prims();
 

 
     extern "C" int native_register_prims();
 

 
     extern "C" int purchases_register_prims();
 

	
extern "C" int main(int argc, char *argv[])	
{
	//printf("Starting ...\n" );
	hxcpp_set_top_of_stack();

   	
     
      std_register_prims();
     
   	
     
      regexp_register_prims();
     
   	
     
      zlib_register_prims();
     
   	
     
   	
     
   	
     
   	
     
   	
     
   	
     
   	
     
      nme_register_prims();
     
   	
     
      std_register_prims();
     
   	
     
      regexp_register_prims();
     
   	
     
      zlib_register_prims();
     
   	
     
   	
     
   	
     
   	
     
   	
     
   	
     
   	
     
      nme_register_prims();
     
   	
     
      ads_register_prims();
     
   	
     
      gamecenter_register_prims();
     
   	
     
      native_register_prims();
     
   	
     
      purchases_register_prims();
     
   	
	
	//printf("Running\n");

	const char *err = NULL;
 		err = hxRunLibrary();
	if (err) {
		printf(" Error %s\n", err );
		return -1;
	}

	//printf("Done!\n");
	return 0;
}
