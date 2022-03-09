#include <iostream>
using namespace std;

class mobile_shop
{
	private:
	string cname;
	string cnic;
	
	public:
		    string modelip;
		    string varientip;
		    string colourip;
		    char proceedip;
		    char infoip;
		    
			void set(string name){
				cname=name;
			}
			
			string get(){
					return cname;
				}
				 
			void set1(string no){
				cnic=no;
			}
			
			string get1(){
				return cnic;
			}
			
			string Brand;
		
			void brand(){//brand
	    
		cout<<"Here are some suggestions of mobile brands for you may it help you to select it: "<<endl<<endl
	    <<"******************BRAND*******************"<<endl<<endl<<endl
		<<"IPhone"<<endl
	    <<"Samsung"<<endl
	    <<"Xiaomi"<<endl
	    <<"Oppo"<<endl
	    <<"Vivo"<<endl
        <<endl<<endl;
		
		cout<<"So mobile you need should be of which brand ? "<<endl;
	    cin>>Brand;	
	    
		if (Brand=="IPhone"){//iphone
		
	        cout<<"........................IPHONE......................."<<endl<<endl
			    <<endl<<"The latest Version of IPhone is IPhone 12"<<endl<<endl
			    <<"Which IPhone model you want?"<<endl<<endl
			    <<"IPhone_12"<<endl
			    <<"IPhone_12_mini"<<endl<<endl;
			    cin>>modelip;
			    
			    if(modelip == "IPhone_12"){
			cout<<"**********************IPHONE 12*********************"<<endl<<endl;	
	        cout<<"The variant available in IPhone 12 are:"<<endl
	    	    <<"IPhone_12(128GB)"<<endl
	    	    <<"IPhone_12(256GB)"<<endl
	    	    <<"IPhone_12(512GB)"<<endl
                <<"---------------------VARIENT--------------------"<<endl<<endl	
	    
			    <<"SO write the full name of varient you want : "<<endl;
	    	    cin>>varientip;
                	    
			    if (varientip == "IPhone_12(128GB)"){//128gb
	                cout<<"...............COLOUR.............."<<endl<<endl;   
			    	cout<<"There are five colours available in this varient :"<<endl
	    
			    	    <<"Black"<<endl
	    	    	    <<"White"<<endl
	    	    	    <<"Green"<<endl
	    	    	    <<"Blue"<<endl
	    	    	    <<"Red"<<endl;
	    
			    	cout<<"Please enter the colour you want : "<<endl<<endl;
					cin>>colourip; 
					
					if(colourip == "Black","White","Red","Blue","Green"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl
					    <<"*********************SPECIFICATIONS*****************"<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"Technology:	GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
		                <<"2G bands:	GSM 850 / 900 / 1800 / 1900 - SIM 1 & SIM 2 (dual-SIM) - for China"<<endl
		                <<"3G bands:	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100 CDMA2000 1xEV-DO"<<endl
		                <<"4G bands:	1, 2, 3, 4, 5, 7, 8, 12, 13, 14, 17, 18, 19, 20, 25, 26, 28, 29,"<<endl
		                <<" 30, 32, 34, 38, 39, 40, 41, 42, 46, 48, 66, 71 - A2172"<<endl
		                <<"5G bands:	1, 2, 3, 5, 7, 8, 12, 20, 25, 28, 38, 40, 41, 66, 71, 77, 78, 79, 260, 261"<<endl
		                <<"Speed:HSPA 42.2/5.76 Mbps, LTE-A, 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl
		                <<"Announced:	2020, October 13"<<endl<<"Available. Released 2020, October 23"<<endl<<endl<<endl
		                <<"BODY:"<<endl
		                <<"Dimensions:	146.7 x 71.5 x 7.4 mm (5.78 x 2.81 x 0.29 in)"<<endl
		                <<"Weight:	164 g (5.78 oz)"<<endl
		                <<"Build:	Glass front (Gorilla Glass), glass back (Gorilla Glass), aluminum frame"<<endl<<endl<<endl
		                <<"DISPLAY:"<<endl
		                <<"Type:	Super Retina XDR OLED, HDR10, 625 nits (typ), 1200 nits (peak)"<<endl
		                <<"Size	6.1 inches, 90.2 cm2 (~86.0% screen-to-body ratio)"<<endl
		                <<"Resolution	1170 x 2532 pixels, 19.5:9 ratio (~460 ppi density)"<<endl
		                <<"Protection	Scratch-resistant ceramic glass, oleophobic coating"<<endl<<endl<<endl
		                <<"PLATFORM:"<<endl
		                <<"OS	iOS 14.1, upgradable to iOS 14.2"<<endl
		                <<"Chipset	Apple A14 Bionic (5 nm)"<<endl
		                <<"CPU	Hexa-core (2x3.1 GHz Firestorm + 4x1.8 GHz Icestorm)"<<endl
		                <<"Main Camera"<<endl
                        <<"Dual	12 MP, f/1.6, 26mm (wide), 1.4Âµm, dual pixel PDAF, OIS"<<endl
                        <<"12MP, f/2.4, 120Ëš, 13mm (ultrawide), 1/3.6"<<endl
		                <<"Features	Dual-LED dual-tone flash, HDR (photo/panorama)"<<endl
		                <<"Video	4K@24/30/60fps, 1080p@30/60/120/240fps, HDR, Dolby Vision HDR (up to 30fps), stereo sound rec."<<endl
		                <<"Selfie camera"<<endl
                        <<"Dual	12 MP, f/2.2, 23mm (wide), 1/3.6"<<endl
                        <<"SL 3D, (depth/biometrics sensor)"<<endl
		                <<"Features	HDR"<<endl
                        <<"Video	4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS"<<endl<<endl<<endl
		                <<"SOUND"<<endl
		                <<"Loudspeaker	Yes, with stereo speakers"<<endl
                        <<"3.5mm jack	No"<<endl<<endl<<endl
                        <<"BATTERY:"<<endl
						<<"Type	Li-Ion 2815 mAh, non-removable (10.78 Wh)"<<endl
                        <<"Charging	Fast charging 20W, 50% in 30 min (advertised)"<<endl
                        <<"USB Power Delivery 2.0"<<endl
                        <<"Qi magnetic fast wireless charging 15W"<<endl
                        <<"Stand-by	Up to 17 h (multimedia)"<<endl
                        <<"Music play	Up to 65 h"<<endl<<endl
                        <<"TEST:"<<endl
                        <<"Display	Contrast ratio: Infinite (nominal)"<<endl
                        <<"Camera	Photo / Video"<<endl
                        <<"Loudspeaker	-24.4 LUFS (Very good)"<<endl
                        <<"Battery life	"<<endl
                        <<"Endurance rating 84h"<<endl<<endl<<endl;
					cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
		
					    if(proceedip == 'A'){//proceeding
					    cout<<"==================PRICE &================="<<endl<<endl<<endl;
					    	cout<<"The price of your phone is 235,000 only."<<endl<<endl<<endl
							    <<"Do you want to see all the information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<"**************INFORMATION*************"<<endl;
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"The varient selected by you is : "<<varientip<<endl
							        <<"The model selected id : "<<modelip<<endl
							        <<"Colour of model "<<modelip<<" are : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
					    <<"Technology:	GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
		                <<"2G bands:	GSM 850 / 900 / 1800 / 1900 - SIM 1 & SIM 2 (dual-SIM) - for China"<<endl
		                <<"3G bands:	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100 CDMA2000 1xEV-DO"<<endl
		                <<"4G bands:	1, 2, 3, 4, 5, 7, 8, 12, 13, 14, 17, 18, 19, 20, 25, 26, 28, 29,"<<endl
		                <<" 30, 32, 34, 38, 39, 40, 41, 42, 46, 48, 66, 71 - A2172"<<endl
		                <<"5G bands:	1, 2, 3, 5, 7, 8, 12, 20, 25, 28, 38, 40, 41, 66, 71, 77, 78, 79, 260, 261"<<endl
		                <<"Speed:HSPA 42.2/5.76 Mbps, LTE-A, 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl
		                <<"Announced:	2020, October 13"<<endl<<"Available. Released 2020, October 23"<<endl<<endl<<endl
		                <<"BODY:"<<endl
		                <<"Dimensions:	146.7 x 71.5 x 7.4 mm (5.78 x 2.81 x 0.29 in)"<<endl
		                <<"Weight:	164 g (5.78 oz)"<<endl
		                <<"Build:	Glass front (Gorilla Glass), glass back (Gorilla Glass), aluminum frame"<<endl<<endl<<endl
		                <<"DISPLAY:"<<endl
		                <<"Type:	Super Retina XDR OLED, HDR10, 625 nits (typ), 1200 nits (peak)"<<endl
		                <<"Size	6.1 inches, 90.2 cm2 (~86.0% screen-to-body ratio)"<<endl
		                <<"Resolution	1170 x 2532 pixels, 19.5:9 ratio (~460 ppi density)"<<endl
		                <<"Protection	Scratch-resistant ceramic glass, oleophobic coating"<<endl<<endl<<endl
		                <<"PLATFORM:"<<endl
		                <<"OS	iOS 14.1, upgradable to iOS 14.2"<<endl
		                <<"Chipset	Apple A14 Bionic (5 nm)"<<endl
		                <<"CPU	Hexa-core (2x3.1 GHz Firestorm + 4x1.8 GHz Icestorm)"<<endl
		                <<"Main Camera"<<endl
                        <<"Dual	12 MP, f/1.6, 26mm (wide), 1.4Âµm, dual pixel PDAF, OIS"<<endl
                        <<"12MP, f/2.4, 120Ëš, 13mm (ultrawide), 1/3.6"<<endl
		                <<"Features	Dual-LED dual-tone flash, HDR (photo/panorama)"<<endl
		                <<"Video	4K@24/30/60fps, 1080p@30/60/120/240fps, HDR, Dolby Vision HDR (up to 30fps), stereo sound rec."<<endl
		                <<"Selfie camera"<<endl
                        <<"Dual	12 MP, f/2.2, 23mm (wide), 1/3.6"<<endl
                        <<"SL 3D, (depth/biometrics sensor)"<<endl
		                <<"Features	HDR"<<endl
                        <<"Video	4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS"<<endl<<endl<<endl
		                <<"SOUND"<<endl
		                <<"Loudspeaker	Yes, with stereo speakers"<<endl
                        <<"3.5mm jack	No"<<endl<<endl<<endl
                        <<"BATTERY:"<<endl
						<<"Type	Li-Ion 2815 mAh, non-removable (10.78 Wh)"<<endl
                        <<"Charging	Fast charging 20W, 50% in 30 min (advertised)"<<endl
                        <<"USB Power Delivery 2.0"<<endl
                        <<"Qi magnetic fast wireless charging 15W"<<endl
                        <<"Stand-by	Up to 17 h (multimedia)"<<endl
                        <<"Music play	Up to 65 h"<<endl<<endl
                        <<"TEST:"<<endl
                        <<"Display	Contrast ratio: Infinite (nominal)"<<endl
                        <<"Camera	Photo / Video"<<endl
                        <<"Loudspeaker	-24.4 LUFS (Very good)"<<endl
                        <<"Battery life	"<<endl
                        <<"Endurance rating 84h"<<endl<<endl<<endl
							        <<"The price of your phone is : 235,000"<<endl;
							        cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
								}//infoip
								else{//infoelse
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
								}
						}//proceeding
		
						else{//pro_else
							cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
						}//pro_else
					}   //colour
					else{
						cout<<"Your input wasn't valid please try again, Thank you."<<endl;
					}
				}//128gb
				else if(varientip =="IPhone_12(256GB)","IPhone_12(512GB)"){//256GB
				cout<<"There are five colours available in this varient :"<<endl
	                    <<"**************color***********"<<endl
			    	    <<"Silver"<<endl
	    	    	    <<"Grey"<<endl
	    	    	    <<"Green"<<endl
	    	    	    <<"Blue"<<endl
	    	    	    <<"Gold"<<endl;
	    
			    	cout<<"Please enter the colour you want : "<<endl<<endl;
					cin>>colourip; 
					if(colourip == "Silver","Gold","Red","Blue","Green"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl
					    <<"=================SPECIFICATIONS================"<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"Technology:	GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
		                <<"2G bands:	GSM 850 / 900 / 1800 / 1900 - SIM 1 & SIM 2 (dual-SIM) - for China"<<endl
		                <<"3G bands:	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100 CDMA2000 1xEV-DO"<<endl
		                <<"4G bands:	1, 2, 3, 4, 5, 7, 8, 12, 13, 14, 17, 18, 19, 20, 25, 26, 28, 29,"<<endl
		                <<" 30, 32, 34, 38, 39, 40, 41, 42, 46, 48, 66, 71 - A2172"<<endl
		                <<"5G bands:	1, 2, 3, 5, 7, 8, 12, 20, 25, 28, 38, 40, 41, 66, 71, 77, 78, 79, 260, 261"<<endl
		                <<"Speed:HSPA 42.2/5.76 Mbps, LTE-A, 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl
		                <<"Announced:	2020, October 13"<<endl<<"Available. Released 2020, October 23"<<endl<<endl<<endl
		                <<"BODY:"<<endl
		                <<"Dimensions:	146.7 x 71.5 x 7.4 mm (5.78 x 2.81 x 0.29 in)"<<endl
		                <<"Weight:	164 g (5.78 oz)"<<endl
		                <<"Build:	Glass front (Gorilla Glass), glass back (Gorilla Glass), aluminum frame"<<endl<<endl<<endl
		                <<"DISPLAY:"<<endl
		                <<"Type:	Super Retina XDR OLED, HDR10, 625 nits (typ), 1200 nits (peak)"<<endl
		                <<"Size	6.1 inches, 90.2 cm2 (~86.0% screen-to-body ratio)"<<endl
		                <<"Resolution	1170 x 2532 pixels, 19.5:9 ratio (~460 ppi density)"<<endl
		                <<"Protection	Scratch-resistant ceramic glass, oleophobic coating"<<endl<<endl<<endl
		                <<"PLATFORM:"<<endl
		                <<"OS	iOS 14.1, upgradable to iOS 14.2"<<endl
		                <<"Chipset	Apple A14 Bionic (5 nm)"<<endl
		                <<"CPU	Hexa-core (2x3.1 GHz Firestorm + 4x1.8 GHz Icestorm)"<<endl
		                <<"Main Camera"<<endl
                        <<"Dual	12 MP, f/1.6, 26mm (wide), 1.4Âµm, dual pixel PDAF, OIS"<<endl
                        <<"12MP, f/2.4, 120Ëš, 13mm (ultrawide), 1/3.6"<<endl
		                <<"Features	Dual-LED dual-tone flash, HDR (photo/panorama)"<<endl
		                <<"Video	4K@24/30/60fps, 1080p@30/60/120/240fps, HDR, Dolby Vision HDR (up to 30fps), stereo sound rec."<<endl
		                <<"Selfie camera"<<endl
                        <<"Dual	12 MP, f/2.2, 23mm (wide), 1/3.6"<<endl
                        <<"SL 3D, (depth/biometrics sensor)"<<endl
		                <<"Features	HDR"<<endl
                        <<"Video	4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS"<<endl<<endl<<endl
		                <<"SOUND"<<endl
		                <<"Loudspeaker	Yes, with stereo speakers"<<endl
                        <<"3.5mm jack	No"<<endl<<endl<<endl
                        <<"BATTERY:"<<endl
						<<"Type	Li-Ion 2815 mAh, non-removable (10.78 Wh)"<<endl
                        <<"Charging	Fast charging 20W, 50% in 30 min (advertised)"<<endl
                        <<"USB Power Delivery 2.0"<<endl
                        <<"Qi magnetic fast wireless charging 15W"<<endl
                        <<"Stand-by	Up to 17 h (multimedia)"<<endl
                        <<"Music play	Up to 65 h"<<endl<<endl
                        <<"TEST:"<<endl
                        <<"Display	Contrast ratio: Infinite (nominal)"<<endl
                        <<"Camera	Photo / Video"<<endl
                        <<"Loudspeaker	-24.4 LUFS (Very good)"<<endl
                        <<"Battery life	"<<endl
                        <<"Endurance rating 84h"<<endl<<endl<<endl;
					cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
		
					    if(proceedip == 'A'){//proceeding
					    cout<<"******************PRICE*****************"<<endl<<endl;
					    	cout<<"The price of your phone is 250,000 only."<<endl<<endl<<endl
							    <<"Do you want to see all the information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<"=================INFORMATION=============="<<endl<<endl;
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"The varient selected by you is : "<<varientip<<endl
							        <<"The model selected id : "<<modelip<<endl
							        <<"Colour of model "<<modelip<<" are : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
					    <<"Technology:	GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
		                <<"2G bands:	GSM 850 / 900 / 1800 / 1900 - SIM 1 & SIM 2 (dual-SIM) - for China"<<endl
		                <<"3G bands:	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100 CDMA2000 1xEV-DO"<<endl
		                <<"4G bands:	1, 2, 3, 4, 5, 7, 8, 12, 13, 14, 17, 18, 19, 20, 25, 26, 28, 29,"<<endl
		                <<" 30, 32, 34, 38, 39, 40, 41, 42, 46, 48, 66, 71 - A2172"<<endl
		                <<"5G bands:	1, 2, 3, 5, 7, 8, 12, 20, 25, 28, 38, 40, 41, 66, 71, 77, 78, 79, 260, 261"<<endl
		                <<"Speed:HSPA 42.2/5.76 Mbps, LTE-A, 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl
		                <<"Announced:	2020, October 13"<<endl<<"Available. Released 2020, October 23"<<endl<<endl<<endl
		                <<"BODY:"<<endl
		                <<"Dimensions:	146.7 x 71.5 x 7.4 mm (5.78 x 2.81 x 0.29 in)"<<endl
		                <<"Weight:	164 g (5.78 oz)"<<endl
		                <<"Build:	Glass front (Gorilla Glass), glass back (Gorilla Glass), aluminum frame"<<endl<<endl<<endl
		                <<"DISPLAY:"<<endl
		                <<"Type:	Super Retina XDR OLED, HDR10, 625 nits (typ), 1200 nits (peak)"<<endl
		                <<"Size	6.1 inches, 90.2 cm2 (~86.0% screen-to-body ratio)"<<endl
		                <<"Resolution	1170 x 2532 pixels, 19.5:9 ratio (~460 ppi density)"<<endl
		                <<"Protection	Scratch-resistant ceramic glass, oleophobic coating"<<endl<<endl<<endl
		                <<"PLATFORM:"<<endl
		                <<"OS	iOS 14.1, upgradable to iOS 14.2"<<endl
		                <<"Chipset	Apple A14 Bionic (5 nm)"<<endl
		                <<"CPU	Hexa-core (2x3.1 GHz Firestorm + 4x1.8 GHz Icestorm)"<<endl
		                <<"Main Camera"<<endl
                        <<"Dual	12 MP, f/1.6, 26mm (wide), 1.4Âµm, dual pixel PDAF, OIS"<<endl
                        <<"12MP, f/2.4, 120Ëš, 13mm (ultrawide), 1/3.6"<<endl
		                <<"Features	Dual-LED dual-tone flash, HDR (photo/panorama)"<<endl
		                <<"Video	4K@24/30/60fps, 1080p@30/60/120/240fps, HDR, Dolby Vision HDR (up to 30fps), stereo sound rec."<<endl
		                <<"Selfie camera"<<endl
                        <<"Dual	12 MP, f/2.2, 23mm (wide), 1/3.6"<<endl
                        <<"SL 3D, (depth/biometrics sensor)"<<endl
		                <<"Features	HDR"<<endl
                        <<"Video	4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS"<<endl<<endl<<endl
		                <<"SOUND"<<endl
		                <<"Loudspeaker	Yes, with stereo speakers"<<endl
                        <<"3.5mm jack	No"<<endl<<endl<<endl
                        <<"BATTERY:"<<endl
						<<"Type	Li-Ion 2815 mAh, non-removable (10.78 Wh)"<<endl
                        <<"Charging	Fast charging 20W, 50% in 30 min (advertised)"<<endl
                        <<"USB Power Delivery 2.0"<<endl
                        <<"Qi magnetic fast wireless charging 15W"<<endl
                        <<"Stand-by	Up to 17 h (multimedia)"<<endl
                        <<"Music play	Up to 65 h"<<endl<<endl
                        <<"TEST:"<<endl
                        <<"Display	Contrast ratio: Infinite (nominal)"<<endl
                        <<"Camera	Photo / Video"<<endl
                        <<"Loudspeaker	-24.4 LUFS (Very good)"<<endl
                        <<"Battery life	"<<endl
                        <<"Endurance rating 84h"<<endl<<endl<<endl
							        <<"The price of your phone is : 250,000"<<endl;
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
							        else{
							        	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
			}
			else {
				cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
			}
			}
			else{
				cout<<"Your input wasn't valid please try again, Thank you."<<endl;
			}
				}//256GB
				else{
					cout<<"Your input wasn't valid please try again, Thank you."<<endl;
				}
				}//model
				else if(modelip == "IPhone_12_mini"){//ipmini
				cout<<"..................VARIENT................."<<endl<<endl;
	        cout<<"The variant available in IPhone 12 mini are:"<<endl
	    	    <<"IPhone_12(128GB)"<<endl
	    	    <<"IPhone_12(256GB)"<<endl
	    	    <<"IPhone_12(512GB)"<<endl
	
	    
			    <<"SO write the full name of varient you want : "<<endl<<endl;
	    	    cin>>varientip;
                	    
			    if (varientip == "IPhone_12(128GB)","IPhone_12(256GB)","IPhone_12(512GB)"){//128gb
	                cout<<"-------------------COLOUR----------------"<<endl<<endl;
			    	cout<<"There are five colours available in this varient :"<<endl
	    
			    	    <<"Black"<<endl
	    	    	    <<"White"<<endl
	    	    	    <<"Green"<<endl
	    	    	    <<"Blue"<<endl
	    	    	    <<"Red"<<endl;
	    
			    	cout<<"Please enter the colour you want : "<<endl<<endl;
					cin>>colourip; 
						if(colourip == "Silver","Gold","Red","Blue","Green"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"Model"<<endl
<<"Apple iPhone 12 Mini"<<endl<<endl
<<"Released"<<endl<<endl
<<"Released (OCT 13, 2020)"<<endl
<<"Status"<<endl<<endl
<<"Available"<<endl<<endl
<<"Design"<<endl
<<"Type"<<endl
<<"Bar"<<endl
<<"Dimensions"<<endl
<<"131.5 mm x 64.2 mm x 7.4 mm"<<endl
<<"Weight"<<endl
<<"135 grams"<<endl
<<"Waterproof"<<endl
<<"Rated IP68"<<endl
<<"Display"<<endl
<<"Display Type"<<endl
<<"Super Retina XDR display"<<endl
<<"Size"<<endl
<<"5.4-inch"<<endl
<<"Resolution"<<endl
<<"2340 x 1080 pixels"<<endl
<<"Display Colors"<<endl
<<"16M Colors"<<endl
<<"Pixel Density"<<endl
<<"476 ppi (pixels per inch)"<<endl
<<"Touch Screen"<<endl
<<"Yes"<<endl
<<"Features"<<endl
<<"HDR display"<<endl
<<"True Tone"<<endl
<<"Wide color (P3)"<<endl
<<"Haptic Touch"<<endl
<<"2,000,000:1 contrast ratio (typical)"<<endl
<<"625 nits max brightness (typical); 1200 nits max brightness (HDR)"<<endl
<<"Fingerprint-resistant oleophobic coating"<<endl
<<"Support for display of multiple languages and characters simultaneously"<<endl
<<"Hardware"<<endl
<<"CPU"<<endl
<<"Apple A14 Bionic"<<endl
<<"RAM (Memory)"<<endl
<<"Internal Storage"<<endl
<<"64 GB, 128 GB, 256 GB"<<endl
<<"Memory Card Slot"<<endl
<<"No"<<endl
<<"Sensors"<<endl
<<"Face ID"<<endl
<<"Barometer"<<endl
<<"Three-axis gyro"<<endl
<<"Accelerometer"<<endl
<<"Proximity sensor"<<endl
<<"Ambient light sensor"<<endl
<<"Software"<<endl
<<"Operating System"<<endl
<<"iOS 14"<<endl
<<"User Interface"<<endl
<<"Yes"<<endl<<endl<<endl
<<"Camera"<<endl
<<"Rear Camera"<<endl
<<"12 MP + 12 MP"<<endl
<<"Image"<<endl
<<"1080p"<<endl
<<"Video"<<endl
<<"4K video recording at 24 fps, 30 fps, or 60 fps"<<endl
<<"Flash"<<endl
<<"Retina Flash, Brighter True Tone flash, Brighter True Tone flash with Slow Sync"<<endl
<<"Front Camera"<<endl
<<"12 MP"<<endl<<endl<<endl
<<"Network"<<endl
<<"SIM"<<endl
<<"Nano SIM"<<endl
<<"Dual SIM"<<endl
<<"Dual SIM (nano-SIM and eSIM)"<<endl
<<"Connectivity"<<endl
<<"Wi-fi"<<endl
<<"Wi-Fi 6 (802.11ax) with 2x2 MIMO"<<endl
<<"USB"<<endl
<<"USB-C to Lightning Cable"<<endl
<<"GPS"<<endl
<<"Built-in GPS, GLONASS, Galileo, QZSS, and BeiDou"<<endl
<<"NFC"<<endl
<<"NFC with reader mode, Accessory Identification NFC"<<endl
<<"Wireless Charging"<<endl
<<"Yes 15W MagSafe"<<endl
<<"Headphone Jack"<<endl
<<"No"<<endl<<endl<<endl
<<"Battery"<<endl
<<"Capacity"<<endl
<<"Built-in rechargeable lithium-ion + MagSafe wireless charging up to 15W10 + Qi wireless charging up to 7.5W10"<<endl
<<"Media"<<endl
<<"Video Playback"<<endl
<<"Yes"<<endl
<<"Video Out"<<endl
<<"Yes"<<endl
<<"FM Radio"<<endl
<<"No"<<endl
<<"Ring Tones"<<endl
<<"Yes"<<endl
<<"Loudspeaker"<<endl
<<"Yes"<<endl
<<"Handsfree"<<endl
<<"Yes"<<endl
<<"Data"<<endl
<<"4G LTE"<<endl
<<"LTE"<<endl
<<"5G NR Bands"<<endl
<<"5G (sub-6 GHz and mmWave)"<<endl
<<"Speed"<<endl
<<"HSPA 42.2/5.76 Mbps, LTE-A 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl;
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 250,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl
							    <<"Do you want to see all the information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"The varient selected by you is : "<<varientip<<endl
							        <<"The model selected id : "<<modelip<<endl
							        <<"Colour of model "<<modelip<<" are : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
					    <<"Model"<<endl
<<"Apple iPhone 12 Mini"<<endl<<endl
<<"Released"<<endl<<endl
<<"Released (OCT 13, 2020)"<<endl
<<"Status"<<endl<<endl
<<"Available"<<endl<<endl
<<"Design"<<endl
<<"Type"<<endl
<<"Bar"<<endl
<<"Dimensions"<<endl
<<"131.5 mm x 64.2 mm x 7.4 mm"<<endl
<<"Weight"<<endl
<<"135 grams"<<endl
<<"Waterproof"<<endl
<<"Rated IP68"<<endl
<<"Display"<<endl
<<"Display Type"<<endl
<<"Super Retina XDR display"<<endl
<<"Size"<<endl
<<"5.4-inch"<<endl
<<"Resolution"<<endl
<<"2340 x 1080 pixels"<<endl
<<"Display Colors"<<endl
<<"16M Colors"<<endl
<<"Pixel Density"<<endl
<<"476 ppi (pixels per inch)"<<endl
<<"Touch Screen"<<endl
<<"Yes"<<endl
<<"Features"<<endl
<<"HDR display"<<endl
<<"True Tone"<<endl
<<"Wide color (P3)"<<endl
<<"Haptic Touch"<<endl
<<"2,000,000:1 contrast ratio (typical)"<<endl
<<"625 nits max brightness (typical); 1200 nits max brightness (HDR)"<<endl
<<"Fingerprint-resistant oleophobic coating"<<endl
<<"Support for display of multiple languages and characters simultaneously"<<endl
<<"Hardware"<<endl
<<"CPU"<<endl
<<"Apple A14 Bionic"<<endl
<<"RAM (Memory)"<<endl
<<"Internal Storage"<<endl
<<"64 GB, 128 GB, 256 GB"<<endl
<<"Memory Card Slot"<<endl
<<"No"<<endl
<<"Sensors"<<endl
<<"Face ID"<<endl
<<"Barometer"<<endl
<<"Three-axis gyro"<<endl
<<"Accelerometer"<<endl
<<"Proximity sensor"<<endl
<<"Ambient light sensor"<<endl
<<"Software"<<endl
<<"Operating System"<<endl
<<"iOS 14"<<endl
<<"User Interface"<<endl
<<"Yes"<<endl<<endl<<endl
<<"Camera"<<endl
<<"Rear Camera"<<endl
<<"12 MP + 12 MP"<<endl
<<"Image"<<endl
<<"1080p"<<endl
<<"Video"<<endl
<<"4K video recording at 24 fps, 30 fps, or 60 fps"<<endl
<<"Flash"<<endl
<<"Retina Flash, Brighter True Tone flash, Brighter True Tone flash with Slow Sync"<<endl
<<"Front Camera"<<endl
<<"12 MP"<<endl<<endl<<endl
<<"Network"<<endl
<<"SIM"<<endl
<<"Nano SIM"<<endl
<<"Dual SIM"<<endl
<<"Dual SIM (nano-SIM and eSIM)"<<endl
<<"Connectivity"<<endl
<<"Wi-fi"<<endl
<<"Wi-Fi 6 (802.11ax) with 2x2 MIMO"<<endl
<<"USB"<<endl
<<"USB-C to Lightning Cable"<<endl
<<"GPS"<<endl
<<"Built-in GPS, GLONASS, Galileo, QZSS, and BeiDou"<<endl
<<"NFC"<<endl
<<"NFC with reader mode, Accessory Identification NFC"<<endl
<<"Wireless Charging"<<endl
<<"Yes 15W MagSafe"<<endl
<<"Headphone Jack"<<endl
<<"No"<<endl<<endl<<endl
<<"Battery"<<endl
<<"Capacity"<<endl
<<"Built-in rechargeable lithium-ion + MagSafe wireless charging up to 15W10 + Qi wireless charging up to 7.5W10"<<endl
<<"Media"<<endl
<<"Video Playback"<<endl
<<"Yes"<<endl
<<"Video Out"<<endl
<<"Yes"<<endl
<<"FM Radio"<<endl
<<"No"<<endl
<<"Ring Tones"<<endl
<<"Yes"<<endl
<<"Loudspeaker"<<endl
<<"Yes"<<endl
<<"Handsfree"<<endl
<<"Yes"<<endl
<<"Data"<<endl
<<"4G LTE"<<endl
<<"LTE"<<endl
<<"5G NR Bands"<<endl
<<"5G (sub-6 GHz and mmWave)"<<endl
<<"Speed"<<endl
<<"HSPA 42.2/5.76 Mbps, LTE-A 5G, EV-DO Rev.A 3.1 Mbps"<<endl<<endl<<endl
							        <<"The price of your phone is : 250,000"<<endl;
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
							        else{
							        	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
			}
			else {
				cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
			}
			}
			else{
				cout<<"Your input wasn't valid please try again, Thank you."<<endl;
			}
				}//128
				
			else{
				cout<<"The input you have entered is invalid";
			}	   	
				
		}
					
					
			}	//ipmini
if (Brand=="Samsung"){//samsung
	cout<<"=======================SAMAUNG====================="<<endl<<endl
	    <<"The latest mobiles released by Samsung are:"<<endl<<endl
	    <<"Samsung_Galaxy_Fold"<<endl
	    <<"Samsung_Galaxy_Note20_Ultra"<<endl
        <<"Samsung_Galaxy_Note10_Plus"<<endl
        <<"Samsung_Galaxy_S20_Plus"<<endl<<endl
        <<"Which mobile model of Samsung you want please enter it's name : "<<endl;
        cin>>modelip;
        
        if(modelip == "Samsung_Galaxy_Fold"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are two colours available in this model :"<<endl<<endl
            <<"Mystic_Black"<<endl
            <<"Mystic_Bronze"<<endl<<endl
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Mystic_Black","Mystic_Bronze"){//color
            	cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"NETWORK	Technology"<<endl
					<<"	GSM / HSPA / LTE"<<endl
<<"LAUNCH	Announced	2019, February"<<endl
<<"Status	Available. Released 2019, September"<<endl
<<"BODY	Dimensions	Unfolded: 160.9 x 117.9 x 6.9 mm"<<endl
<<"Folded: 160.9 x 62.9 x 15.5 mm"<<endl
<<"Weight	263 g (9.28 oz)"<<endl
<<"Build	Glass front (folded), plastic front (unfolded), glass back, aluminum frame"<<endl
<<"SIM	Nano-SIM, eSIM"<<endl
<<"DISPLAY	Type	Foldable Dynamic AMOLED, HDR10+"<<endl
<<"Size	7.3 inches, 162.6 cm2 (~85.7% screen-to-body ratio)"<<endl
<<"Resolution	1536 x 2152 pixels (~362 ppi density)"<<endl
 	<<"Cover display:"<<endl
<<"Super AMOLED, 4.6 inches, 720 x 1680 pixels, 21:9 ratio"<<endl
<<"PLATFORM	OS	Android 9.0 (Pie), upgradable to Android 11, One UI 3.1"<<endl
<<"Chipset	Qualcomm SM8150 Snapdragon 855 (7 nm)"<<endl
<<"CPU	Octa-core (1x2.84 GHz Kryo 485 & 3x2.42 GHz Kryo 485 & 4x1.78 GHz Kryo 485)"<<endl
<<"GPU	Adreno 640"<<endl
<<"MEMORY	Card slot	No"<<endl
<<"Internal	512GB 12GB RAM"<<endl
<<" 	UFS 3.0"<<endl
<<"MAIN CAMERA	Triple	12 MP, f/1.5-2.4, 27mm (wide), 1/2.55, 1.4µm, Dual Pixel PDAF, OIS"<<endl
<<"12 MP, f/2.4, 52mm (telephoto), 1/3.6, 1.0µm, AF, OIS, 2x optical zoom"<<endl
<<"16 MP, f/2.2, 12mm (ultrawide), 1/3.1, 1.0µm"<<endl
<<"Features	LED flash, HDR, panorama"<<endl
<<"Video	4K@60fps, 1080p@60/240fps (gyro-EIS), 720p@960fps (gyro-EIS), HDR10"<<endl
<<"SELFIE CAMERA	Dual	10 MP, f/2.2, 26mm (wide), 1/3, 1.22µm"<<endl
<<"8 MP, f/1.9, 24mm (wide), 1.22µm, depth sensor"<<endl
<<"Cover camera:"<<endl
<<"10 MP, f/2.2, 26mm (wide), 1/3, 1.22µm"<<endl
<<"Features	HDR"<<endl
<<"Video	4K@30/60fps, 1080p@30fps, gyro-EIS"<<endl
<<"SOUND	Loudspeaker	Yes, with stereo speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	32-bit/384kHz audio"<<endl
<<"Tuned by AKG"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.0, A2DP, LE, aptX HD"<<endl
<<"GPS	Yes, with A-GPS, GLONASS, GALILEO, BDS"<<endl
<<"NFC	Yes"<<endl
<<"Radio	No"<<endl
<<"USB	USB Type-C 3.1"<<endl
<<"FEATURES	Sensors	Fingerprint (side-mounted), accelerometer, gyro, proximity, compass, barometer"<<endl
<<" 	ANT+"<<endl
<<"Bixby natural language commands and dictation"<<endl
<<"Samsung DeX (desktop experience support)"<<endl
<<"Samsung Pay (Visa, MasterCard certified)"<<endl
<<"BATTERY	Type	Li-Po 4380 mAh, non-removable"<<endl
<<"Charging	Fast charging 15W"<<endl
<<"Fast wireless charging 15W"<<endl
<<"Reverse wireless charging 4.5W"<<endl
<<"MISC	Colors	Space Silver, Cosmos Black, Martian Green, Astro Blue"<<endl
<<"Models	SM-F900F, SM-F9000, SM-F900W, SM-F900U, SM-F900N, SM-F900U1"<<endl
<<"SAR	0.41 W/kg (head)     1.39 W/kg (body)    "<<endl
<<"SAR EU	0.49 W/kg (head)     1.58 W/kg (body)    "<<endl
<<"Price	About 1750 EUR"<<endl
<<"TESTS	Performance	AnTuTu: 363016 (v7)"<<endl
<<"GeekBench: 11028 (v4.4)"<<endl
<<"GFXBench: 32fps (ES 3.1 onscreen unfolded)"<<endl
<<"Display	Contrast ratio: 185000:1 (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	Voice 70dB / Noise 73dB / Ring 90dB"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 90h"<<endl<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
                    if(proceedip == 'A'){//proceeding
					    cout<<"******************PRICE*****************"<<endl<<endl;
					    	cout<<"The price of your phone is 340,000 only."<<endl<<endl<<endl
							    <<"Do you want to see all the information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
							    
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"The model selected id : "<<modelip<<endl
							        <<"Colour of model "<<modelip<<" are : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
					   <<"NETWORK	Technology"<<endl
					<<"	GSM / HSPA / LTE"<<endl
<<"LAUNCH	Announced	2019, February"<<endl
<<"Status	Available. Released 2019, September"<<endl
<<"BODY	Dimensions	Unfolded: 160.9 x 117.9 x 6.9 mm"<<endl
<<"Folded: 160.9 x 62.9 x 15.5 mm"<<endl
<<"Weight	263 g (9.28 oz)"<<endl
<<"Build	Glass front (folded), plastic front (unfolded), glass back, aluminum frame"<<endl
<<"SIM	Nano-SIM, eSIM"<<endl
<<"DISPLAY	Type	Foldable Dynamic AMOLED, HDR10+"<<endl
<<"Size	7.3 inches, 162.6 cm2 (~85.7% screen-to-body ratio)"<<endl
<<"Resolution	1536 x 2152 pixels (~362 ppi density)"<<endl
 	<<"Cover display:"<<endl
<<"Super AMOLED, 4.6 inches, 720 x 1680 pixels, 21:9 ratio"<<endl
<<"PLATFORM	OS	Android 9.0 (Pie), upgradable to Android 11, One UI 3.1"<<endl
<<"Chipset	Qualcomm SM8150 Snapdragon 855 (7 nm)"<<endl
<<"CPU	Octa-core (1x2.84 GHz Kryo 485 & 3x2.42 GHz Kryo 485 & 4x1.78 GHz Kryo 485)"<<endl
<<"GPU	Adreno 640"<<endl
<<"MEMORY	Card slot	No"<<endl
<<"Internal	512GB 12GB RAM"<<endl
<<" 	UFS 3.0"<<endl
<<"MAIN CAMERA	Triple	12 MP, f/1.5-2.4, 27mm (wide), 1/2.55, 1.4µm, Dual Pixel PDAF, OIS"<<endl
<<"12 MP, f/2.4, 52mm (telephoto), 1/3.6, 1.0µm, AF, OIS, 2x optical zoom"<<endl
<<"16 MP, f/2.2, 12mm (ultrawide), 1/3.1, 1.0µm"<<endl
<<"Features	LED flash, HDR, panorama"<<endl
<<"Video	4K@60fps, 1080p@60/240fps (gyro-EIS), 720p@960fps (gyro-EIS), HDR10"<<endl
<<"SELFIE CAMERA	Dual	10 MP, f/2.2, 26mm (wide), 1/3, 1.22µm"<<endl
<<"8 MP, f/1.9, 24mm (wide), 1.22µm, depth sensor"<<endl
<<"Cover camera:"<<endl
<<"10 MP, f/2.2, 26mm (wide), 1/3, 1.22µm"<<endl
<<"Features	HDR"<<endl
<<"Video	4K@30/60fps, 1080p@30fps, gyro-EIS"<<endl
<<"SOUND	Loudspeaker	Yes, with stereo speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	32-bit/384kHz audio"<<endl
<<"Tuned by AKG"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.0, A2DP, LE, aptX HD"<<endl
<<"GPS	Yes, with A-GPS, GLONASS, GALILEO, BDS"<<endl
<<"NFC	Yes"<<endl
<<"Radio	No"<<endl
<<"USB	USB Type-C 3.1"<<endl
<<"FEATURES	Sensors	Fingerprint (side-mounted), accelerometer, gyro, proximity, compass, barometer"<<endl
<<" 	ANT+"<<endl
<<"Bixby natural language commands and dictation"<<endl
<<"Samsung DeX (desktop experience support)"<<endl
<<"Samsung Pay (Visa, MasterCard certified)"<<endl
<<"BATTERY	Type	Li-Po 4380 mAh, non-removable"<<endl
<<"Charging	Fast charging 15W"<<endl
<<"Fast wireless charging 15W"<<endl
<<"Reverse wireless charging 4.5W"<<endl
<<"MISC	Colors	Space Silver, Cosmos Black, Martian Green, Astro Blue"<<endl
<<"Models	SM-F900F, SM-F9000, SM-F900W, SM-F900U, SM-F900N, SM-F900U1"<<endl
<<"SAR	0.41 W/kg (head)     1.39 W/kg (body)    "<<endl
<<"SAR EU	0.49 W/kg (head)     1.58 W/kg (body)    "<<endl
<<"Price	About 1750 EUR"<<endl
<<"TESTS	Performance	AnTuTu: 363016 (v7)"<<endl
<<"GeekBench: 11028 (v4.4)"<<endl
<<"GFXBench: 32fps (ES 3.1 onscreen unfolded)"<<endl
<<"Display	Contrast ratio: 185000:1 (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	Voice 70dB / Noise 73dB / Ring 90dB"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 90h"<<endl<<endl<<endl
							        <<"The price of your phone is : 340,000"<<endl;
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
							        else{
							        	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
			
		}
		}//color
			else{
				cout<<"Your input wasn't valid please try again, Thank you."<<endl;
			}
				
	}//model
	if(modelip == "Samsung_Galaxy_Note20_Ultra"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are three colours available in this model :"<<endl<<endl
            <<"Mystic_White"<<endl
            <<"Mystic_Bronze"<<endl
			<<"Mystic_BLack"<<endl<<endl
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            if(colourip == "Mystic_Bronze","Mystic_White","Mystic_BLack"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"NETWORK	Technology"<<endl	
<<"GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
<<"LAUNCH	Announced	2020, August 05"<<endl
<<"Status	Available. Released 2020, August 21"<<endl
<<"BODY	Dimensions	164.8 x 77.2 x 8.1 mm (6.49 x 3.04 x 0.32 in)"<<endl
<<"Weight	208 g (7.34 oz)"<<endl
<<"Build	Glass front (Gorilla Glass Victus), glass back (Gorilla Glass Victus), stainless steel frame"<<endl
<<"SIM	Single SIM (Nano-SIM and/or eSIM) or Hybrid Dual SIM (Nano-SIM, dual stand-by)"<<endl
 <<"	IP68 dust/water resistant (up to 1.5m for 30 mins)"<<endl
<<"Stylus, 9ms latency (Bluetooth integration, accelerometer, gyro)"<<endl
<<"DISPLAY	Type	Dynamic AMOLED 2X, 120Hz, HDR10+"<<endl
<<"Size	6.9 inches, 116.7 cm2 (~91.7% screen-to-body ratio)"<<endl
<<"Resolution	1440 x 3088 pixels (~496 ppi density)"<<endl
<<"Protection	Corning Gorilla Glass Victus"<<endl
 <<"	Always-on display"<<endl
<<"120Hz@FHD/60Hz@QHD refresh rate"<<endl
<<"PLATFORM	OS	Android 10, upgradable to Android 11, One UI 3.0"<<endl
<<"Chipset	Exynos 990 (7 nm+) - Global"<<endl
<<"Qualcomm SM8250 Snapdragon 865 5G+ (7 nm+) - USA"<<endl
<<"CPU	Octa-core (2x2.73 GHz Mongoose M5 & 2x2.50 GHz Cortex-A76 & 4x2.0 GHz Cortex-A55) - Global"<<endl
<<"Octa-core (1x3.0 GHz Kryo 585 & 3x2.42 GHz Kryo 585 & 4x1.8 GHz Kryo 585) - USA"<<endl
<<"GPU	Mali-G77 MP11 - Global"<<endl
<<"Adreno 650 - USA"<<endl
<<"MEMORY	Card slot	microSDXC (uses shared SIM slot)"<<endl
<<"Internal	128GB 12GB RAM, 256GB 12GB RAM, 512GB 12GB RAM"<<endl
 <<"	UFS 3.0"<<endl
<<"MAIN CAMERA	Triple	108 MP, f/1.8, 26mm (wide), 1/1.33, 0.8µm, PDAF, Laser AF, OIS"<<endl
<<"12 MP, f/3.0, 120mm (periscope telephoto), 1.0µm, PDAF, OIS, 5x optical zoom, 50x hybrid zoom"<<endl
<<"12 MP, f/2.2, 120°, 13mm (ultrawide), 1/2.55, 1.4µm"<<endl
<<"Features	LED flash, auto-HDR, panorama"<<endl
<<"Video	8K@24fps, 4K@30/60fps, 1080p@30/60/240fps, 720p@960fps, HDR10+, stereo sound rec., gyro-EIS & OIS"<<endl
<<"SELFIE CAMERA	Single	10 MP, f/2.2, 26mm (wide), 1/3.2, 1.22µm, Dual Pixel PDAF"<<endl
<<"Features	Dual video call, Auto-HDR"<<endl
<<"Video	4K@30/60fps, 1080p@30fps"<<endl
<<"SOUND	Loudspeaker	Yes, with stereo speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	32-bit/384kHz audio"<<endl
<<"Tuned by AKG"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.0, A2DP, LE, aptX"<<endl
<<"GPS	Yes, with A-GPS, GLONASS, BDS, GALILEO"<<endl
<<"NFC	Yes"<<endl
<<"Radio	FM radio (Snapdragon model only; market/operator dependent)"<<endl
<<"USB	USB Type-C 3.2, USB On-The-Go"<<endl
<<"FEATURES	Sensors	Fingerprint (under display, ultrasonic), accelerometer, gyro, proximity, compass, barometer"<<endl
 <<"	Samsung Wireless DeX (desktop experience support)"<<endl
<<"ANT+"<<endl
<<"Bixby natural language commands and dictation"<<endl
<<"Samsung Pay (Visa, MasterCard certified)"<<endl
<<"Ultra Wideband (UWB) support"<<endl
<<"BATTERY	Type	Li-Ion 4500 mAh, non-removable"<<endl
<<"Charging	Fast charging 25W"<<endl
<<"USB Power Delivery 3.0"<<endl
<<"Fast Qi/PMA wireless charging 15W"<<endl
<<"Reverse wireless charging 4.5W"<<endl
<<"MISC	Colors	Mystic Bronze, Mystic Black, Mystic White"<<endl
<<"Models	SM-N986B, SM-N986B/DS, SM-N986U, SM-N986U1, SM-N986W, SM-N9860, SM-N986N"<<endl
<<"SAR	0.71 W/kg (head)     1.18 W/kg (body)    "<<endl
<<"SAR EU	0.34 W/kg (head)     1.47 W/kg (body)    "<<endl
<<"Price	$ 944.97 / € 912.00 / £ 779.49 / ? 104,999"<<endl
<<"TESTS	Performance	AnTuTu: 508760 (v8)"<<endl
<<"GeekBench: 2603 (v5.1)"<<endl
<<"GFXBench: 42fps (ES 3.1 onscreen)"<<endl
<<"Display	Contrast ratio: Infinite (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	-27.8 LUFS (Good)"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 88h"<<endl<<endl<<endl;
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 220,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl
							    <<"Do you want to see all the information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"The varient selected by you is : "<<varientip<<endl
							        
							        <<"Colour of model "<<modelip<<"THE clour of your phone is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
                                    				    <<"NETWORK	Technology"<<endl	
<<"GSM / CDMA / HSPA / EVDO / LTE / 5G"<<endl
<<"LAUNCH	Announced	2020, August 05"<<endl
<<"Status	Available. Released 2020, August 21"<<endl
<<"BODY	Dimensions	164.8 x 77.2 x 8.1 mm (6.49 x 3.04 x 0.32 in)"<<endl
<<"Weight	208 g (7.34 oz)"<<endl
<<"Build	Glass front (Gorilla Glass Victus), glass back (Gorilla Glass Victus), stainless steel frame"<<endl
<<"SIM	Single SIM (Nano-SIM and/or eSIM) or Hybrid Dual SIM (Nano-SIM, dual stand-by)"<<endl
 <<"	IP68 dust/water resistant (up to 1.5m for 30 mins)"<<endl
<<"Stylus, 9ms latency (Bluetooth integration, accelerometer, gyro)"<<endl
<<"DISPLAY	Type	Dynamic AMOLED 2X, 120Hz, HDR10+"<<endl
<<"Size	6.9 inches, 116.7 cm2 (~91.7% screen-to-body ratio)"<<endl
<<"Resolution	1440 x 3088 pixels (~496 ppi density)"<<endl
<<"Protection	Corning Gorilla Glass Victus"<<endl
 <<"	Always-on display"<<endl
<<"120Hz@FHD/60Hz@QHD refresh rate"<<endl
<<"PLATFORM	OS	Android 10, upgradable to Android 11, One UI 3.0"<<endl
<<"Chipset	Exynos 990 (7 nm+) - Global"<<endl
<<"Qualcomm SM8250 Snapdragon 865 5G+ (7 nm+) - USA"<<endl
<<"CPU	Octa-core (2x2.73 GHz Mongoose M5 & 2x2.50 GHz Cortex-A76 & 4x2.0 GHz Cortex-A55) - Global"<<endl
<<"Octa-core (1x3.0 GHz Kryo 585 & 3x2.42 GHz Kryo 585 & 4x1.8 GHz Kryo 585) - USA"<<endl
<<"GPU	Mali-G77 MP11 - Global"<<endl
<<"Adreno 650 - USA"<<endl
<<"MEMORY	Card slot	microSDXC (uses shared SIM slot)"<<endl
<<"Internal	128GB 12GB RAM, 256GB 12GB RAM, 512GB 12GB RAM"<<endl
 <<"	UFS 3.0"<<endl
<<"MAIN CAMERA	Triple	108 MP, f/1.8, 26mm (wide), 1/1.33, 0.8µm, PDAF, Laser AF, OIS"<<endl
<<"12 MP, f/3.0, 120mm (periscope telephoto), 1.0µm, PDAF, OIS, 5x optical zoom, 50x hybrid zoom"<<endl
<<"12 MP, f/2.2, 120°, 13mm (ultrawide), 1/2.55, 1.4µm"<<endl
<<"Features	LED flash, auto-HDR, panorama"<<endl
<<"Video	8K@24fps, 4K@30/60fps, 1080p@30/60/240fps, 720p@960fps, HDR10+, stereo sound rec., gyro-EIS & OIS"<<endl
<<"SELFIE CAMERA	Single	10 MP, f/2.2, 26mm (wide), 1/3.2, 1.22µm, Dual Pixel PDAF"<<endl
<<"Features	Dual video call, Auto-HDR"<<endl
<<"Video	4K@30/60fps, 1080p@30fps"<<endl
<<"SOUND	Loudspeaker	Yes, with stereo speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	32-bit/384kHz audio"<<endl
<<"Tuned by AKG"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.0, A2DP, LE, aptX"<<endl
<<"GPS	Yes, with A-GPS, GLONASS, BDS, GALILEO"<<endl
<<"NFC	Yes"<<endl
<<"Radio	FM radio (Snapdragon model only; market/operator dependent)"<<endl
<<"USB	USB Type-C 3.2, USB On-The-Go"<<endl
<<"FEATURES	Sensors	Fingerprint (under display, ultrasonic), accelerometer, gyro, proximity, compass, barometer"<<endl
 <<"	Samsung Wireless DeX (desktop experience support)"<<endl
<<"ANT+"<<endl
<<"Bixby natural language commands and dictation"<<endl
<<"Samsung Pay (Visa, MasterCard certified)"<<endl
<<"Ultra Wideband (UWB) support"<<endl
<<"BATTERY	Type	Li-Ion 4500 mAh, non-removable"<<endl
<<"Charging	Fast charging 25W"<<endl
<<"USB Power Delivery 3.0"<<endl
<<"Fast Qi/PMA wireless charging 15W"<<endl
<<"Reverse wireless charging 4.5W"<<endl
<<"MISC	Colors	Mystic Bronze, Mystic Black, Mystic White"<<endl
<<"Models	SM-N986B, SM-N986B/DS, SM-N986U, SM-N986U1, SM-N986W, SM-N9860, SM-N986N"<<endl
<<"SAR	0.71 W/kg (head)     1.18 W/kg (body)    "<<endl
<<"SAR EU	0.34 W/kg (head)     1.47 W/kg (body)    "<<endl
<<"Price	$ 944.97 / € 912.00 / £ 779.49 / ? 104,999"<<endl
<<"TESTS	Performance	AnTuTu: 508760 (v8)"<<endl
<<"GeekBench: 2603 (v5.1)"<<endl
<<"GFXBench: 42fps (ES 3.1 onscreen)"<<endl
<<"Display	Contrast ratio: Infinite (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	-27.8 LUFS (Good)"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 88h"<<endl<<endl<<endl;
							        cout<<"The price of your phone is : 220,000"<<endl;
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
							        else{
							        	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
			}
			else {
				cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
			}
			}
        }
	
		if(modelip == "Samsung_Galaxy_Note10_Plus"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are three colours available in this model :"<<endl<<endl
            <<"Aura_Glow"<<endl
            <<"Aura_Black"<<endl
			<<"Aura_White"<<endl<<endl
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            if(colourip == "Aura_Glow","Aura_Black","Aura_White"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
					    <<"Build	OS	Android 9.0 (Pie)"<<endl  
<<"UI	One UI  "<<endl
<<"Dimensions	162.3 x 77.1 x 7.9 mm"<<endl  
<<"Weight	196 g  "<<endl
<<"SIM	Dual Sim, Dual Standby, Hybrid Dual SIM (Nano-SIM)"<<endl  
<<"Colors	Aura Glow, Aura White, Aura Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 13(700), 17(700), 18(800), 19(800), 20(800), 25(1900), 26(850), 28(700), 32(1500), 38(2600), 39(1900), 40(2300), 41(2500), 66(1700/2100)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.73 GHz Mongoose M4 + 2 x 2.4 GHz Cortex-A75 + 4 x 1.9 GHz Cortex-A55)  "<<endl
<<"Chipset	Exynos 9825 (7 nm)  "<<endl
<<"GPU	Mali-G76 MP12  "<<endl
<<"Display	Technology	Dynamic AMOLED Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.8 Inches  "<<endl
<<"Resolution	1440 x 3040 Pixels (~495 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass  "<<endl
<<"Extra Features	HDR10+, Always-on display "<<endl 
<<"Memory	Built-in	256GB Built-in, 12GB RAM  "<<endl
<<"Card	microSD Card, (supports up to 1TB) - (uses shared SIM slot) - dual SIM model only"<<endl  
<<"Camera	Main	Quad Camera: 12 MP, f/1.5-1.8-2.4, 26mm (wide), 1/2.55, Dual Pixel PDAF, OIS + 12 MP, f/2.1, 52mm (telephoto), 1/3.6, AF, OIS, 2x optical zoom + 16 MP, f/2.2, 12mm (ultrawide), TOF 3D camera, LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama, Video (2160p@60fps, 1080p@240fps, 720p@960fps, HDR, dual-video rec.)  "<<endl
<<"Front	10 MP, f/1.6, 26mm (wide), Dual Pixel PDAF, Dual video call, Auto-HDR, Video (1440p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.0 with A2DP, LE, apt-X  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS, GALILEO"<<endl  
<<"USB	3.1, Type-C 1.0 reversible connector  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (7CA) Cat20 2048/150 Mbps) "<<endl 
<<"Features	Sensors	Accelerometer, gyro, proximity, compass, Fingerprint (under display), barometer, SpO2  "<<endl
<<"Audio	3.5mm Audio Jack, 32-bit/384kHz audio, Dolby Atmos/AKG sound, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/WMA/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5"<<endl  
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Active noise cancellation with dedicated mic, Dolby Atmos/AKG sound, Samsung Pay (Visa, MasterCard certified), IP68 dust/water proof (up to 1.5m for 30 mins), Stylus (Bluetooth integration, accelerometer, gyro)  "<<endl
<<"Battery	Capacity	(Li-ion Non removable), 4300 mAh  "<<endl
<<"- Fast battery charging 45W, USB Power Delivery 3.0, Fast Qi/PMA wireless charging 20W (market dependent)  "<<endl
<<"Price	Price in Rs: 189,999    Price in USD: $1416  "<<endl<<endl<<endl;
				
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 190,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl
							    
                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" are : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
                                    	    <<"Build	OS	Android 9.0 (Pie)"<<endl  
<<"UI	One UI  "<<endl
<<"Dimensions	162.3 x 77.1 x 7.9 mm"<<endl  
<<"Weight	196 g  "<<endl
<<"SIM	Dual Sim, Dual Standby, Hybrid Dual SIM (Nano-SIM)"<<endl  
<<"Colors	Aura Glow, Aura White, Aura Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 13(700), 17(700), 18(800), 19(800), 20(800), 25(1900), 26(850), 28(700), 32(1500), 38(2600), 39(1900), 40(2300), 41(2500), 66(1700/2100)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.73 GHz Mongoose M4 + 2 x 2.4 GHz Cortex-A75 + 4 x 1.9 GHz Cortex-A55)  "<<endl
<<"Chipset	Exynos 9825 (7 nm)  "<<endl
<<"GPU	Mali-G76 MP12  "<<endl
<<"Display	Technology	Dynamic AMOLED Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.8 Inches  "<<endl
<<"Resolution	1440 x 3040 Pixels (~495 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass  "<<endl
<<"Extra Features	HDR10+, Always-on display "<<endl 
<<"Memory	Built-in	256GB Built-in, 12GB RAM  "<<endl
<<"Card	microSD Card, (supports up to 1TB) - (uses shared SIM slot) - dual SIM model only"<<endl  
<<"Camera	Main	Quad Camera: 12 MP, f/1.5-1.8-2.4, 26mm (wide), 1/2.55, Dual Pixel PDAF, OIS + 12 MP, f/2.1, 52mm (telephoto), 1/3.6, AF, OIS, 2x optical zoom + 16 MP, f/2.2, 12mm (ultrawide), TOF 3D camera, LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama, Video (2160p@60fps, 1080p@240fps, 720p@960fps, HDR, dual-video rec.)  "<<endl
<<"Front	10 MP, f/1.6, 26mm (wide), Dual Pixel PDAF, Dual video call, Auto-HDR, Video (1440p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.0 with A2DP, LE, apt-X  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS, GALILEO"<<endl  
<<"USB	3.1, Type-C 1.0 reversible connector  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (7CA) Cat20 2048/150 Mbps) "<<endl 
<<"Features	Sensors	Accelerometer, gyro, proximity, compass, Fingerprint (under display), barometer, SpO2  "<<endl
<<"Audio	3.5mm Audio Jack, 32-bit/384kHz audio, Dolby Atmos/AKG sound, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/WMA/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5"<<endl  
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Active noise cancellation with dedicated mic, Dolby Atmos/AKG sound, Samsung Pay (Visa, MasterCard certified), IP68 dust/water proof (up to 1.5m for 30 mins), Stylus (Bluetooth integration, accelerometer, gyro)  "<<endl
<<"Battery	Capacity	(Li-ion Non removable), 4300 mAh  "<<endl
<<"- Fast battery charging 45W, USB Power Delivery 3.0, Fast Qi/PMA wireless charging 20W (market dependent)  "<<endl
<<"Price	Price in Rs: 189,999    Price in USD: $1416  "<<endl<<endl<<endl;
							        cout<<"The price of your phone is : 190,000"<<endl;
									cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
							        else{
							        	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
			}
			else {
				cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
			}
			}
        }
        if(modelip == "Samsung_Galaxy_S20_Plus"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are three colours available in this model :"<<endl<<endl
            <<"Cosmic_Grey"<<endl
            <<"Cloud_Blue"<<endl
			<<"Cosmic_Black"<<endl<<endl
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            if(colourip == "Cosmic_Grey", "Cloud_Blue", "Cosmic_Black"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
				        <<"Build	OS	Android 10.0 OS"<<endl  
<<"UI	One UI  "<<endl
<<"Dimensions	161.9 x 73.7 x 7.8 mm"<<endl  
<<"Weight	186 g  "<<endl
<<"SIM	Hybrid Dual SIM, Dual Standby, (Nano-SIM)"<<endl  
<<"Colors	Cosmic Grey, Cloud Blue, Cosmic Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 13(700), 17(700), 18(800), 19(800), 20(800), 25(1900), 26(850), 28(700), 32(1500), 38(2600), 39(1900), 40(2300), 41(2500), 66(1700/2100)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.73 GHz Mongoose M5 & 2x2.60 GHz Cortex-A76 + 4 x 2.0 GHz Cortex-A55)"<<endl  
<<"Chipset	Exynos 990 (7 nm+)  "<<endl
<<"GPU	Mali-G77 MP11  "<<endl
<<"Display	Technology	Dynamic AMOLED capacitive touchscreen, 16M colors, Multitouch"<<endl  
<<"Size	6.7 Inches  "<<endl
<<"Resolution	1440 x 3200 Pixels (~524 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 6  "<<endl
<<"Extra Features	HDR10+, Always-on display, 120Hz (up to FHD resolution)"<<endl  
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 3.0  "<<endl
<<"Card	microSDXC (uses shared SIM slot)  "<<endl
<<"Camera	Main	Quad Camera: 12 MP, f/1.8, 26mm (wide), Dual Pixel PDAF, OIS + 64 MP, f/2.0, (telephoto), PDAF, OIS, 3x hybrid optical zoom + 12 MP, f/2.2, 13mm (ultrawide), AF, Super Steady video + 0.3 MP, TOF 3D, (depth), LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama, Video (3240p@30fps, 2160p@30/60fps, 1080p@30/60/240fps, HDR10+, dual-video rec., stereo sound rec., gyro-EIS & OIS)  "<<endl
<<"Front	10 MP, f/2.2, 26mm (wide), 1/3.2, Dual Pixel PDAF, Dual video call, Auto-HDR, Video (4K@30/60fps, 1080p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/ax, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.0 with A2DP, LE, apt-X  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS, GALILEO  "<<endl
<<"USB	3.2, Type-C 1.0 reversible connector"<<endl  
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (7CA) Cat20 2000/200 Mbps Gbps DL)"<<endl  
<<"Features	Sensors	Accelerometer, Barometer, Compass, Fingerprint(under display, ultrasonic), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/WMA/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass 6), glass back + Gorilla Glass 6), aluminum frame, Active noise cancellation with dedicated mic, ANT+, Bixby natural language commands and dictation, Samsung Pay (Visa, MasterCard certified), IP68 dust/water resistant (up to 1.5m for 30 mins), Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4500 mAh  "<<endl
<<"- Fast battery charging 25W, USB Power Delivery 3.0, Fast Qi/PMA wireless charging 15W, Power bank/Reverse wireless charging 9W  "<<endl<<endl<<endl;
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 188,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
           <<"Build	OS	Android 10.0 OS"<<endl  
<<"UI	One UI  "<<endl
<<"Dimensions	161.9 x 73.7 x 7.8 mm"<<endl  
<<"Weight	186 g  "<<endl
<<"SIM	Hybrid Dual SIM, Dual Standby, (Nano-SIM)"<<endl  
<<"Colors	Cosmic Grey, Cloud Blue, Cosmic Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 13(700), 17(700), 18(800), 19(800), 20(800), 25(1900), 26(850), 28(700), 32(1500), 38(2600), 39(1900), 40(2300), 41(2500), 66(1700/2100)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.73 GHz Mongoose M5 & 2x2.60 GHz Cortex-A76 + 4 x 2.0 GHz Cortex-A55)"<<endl  
<<"Chipset	Exynos 990 (7 nm+)  "<<endl
<<"GPU	Mali-G77 MP11  "<<endl
<<"Display	Technology	Dynamic AMOLED capacitive touchscreen, 16M colors, Multitouch"<<endl  
<<"Size	6.7 Inches  "<<endl
<<"Resolution	1440 x 3200 Pixels (~524 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 6  "<<endl
<<"Extra Features	HDR10+, Always-on display, 120Hz (up to FHD resolution)"<<endl  
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 3.0  "<<endl
<<"Card	microSDXC (uses shared SIM slot)  "<<endl
<<"Camera	Main	Quad Camera: 12 MP, f/1.8, 26mm (wide), Dual Pixel PDAF, OIS + 64 MP, f/2.0, (telephoto), PDAF, OIS, 3x hybrid optical zoom + 12 MP, f/2.2, 13mm (ultrawide), AF, Super Steady video + 0.3 MP, TOF 3D, (depth), LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama, Video (3240p@30fps, 2160p@30/60fps, 1080p@30/60/240fps, HDR10+, dual-video rec., stereo sound rec., gyro-EIS & OIS)  "<<endl
<<"Front	10 MP, f/2.2, 26mm (wide), 1/3.2, Dual Pixel PDAF, Dual video call, Auto-HDR, Video (4K@30/60fps, 1080p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/ax, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.0 with A2DP, LE, apt-X  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS, GALILEO  "<<endl
<<"USB	3.2, Type-C 1.0 reversible connector"<<endl  
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (7CA) Cat20 2000/200 Mbps Gbps DL)"<<endl  
<<"Features	Sensors	Accelerometer, Barometer, Compass, Fingerprint(under display, ultrasonic), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/WMA/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass 6), glass back + Gorilla Glass 6), aluminum frame, Active noise cancellation with dedicated mic, ANT+, Bixby natural language commands and dictation, Samsung Pay (Visa, MasterCard certified), IP68 dust/water resistant (up to 1.5m for 30 mins), Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4500 mAh  "<<endl
<<"- Fast battery charging 25W, USB Power Delivery 3.0, Fast Qi/PMA wireless charging 15W, Power bank/Reverse wireless charging 9W  "<<endl<<endl<<endl;
							        cout<<"The price of your phone is : 188,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
        }
					
}
			

}//samsung	

if (Brand=="Xiaomi"){//xiaomi
	cout<<"=======================XIAOMI====================="<<endl<<endl
	    <<"The latest mobiles released by XIaomi are:"<<endl<<endl
	    <<"Mi_11_Lite"<<endl
	    <<"Mi_10T"<<endl
        <<"Xiaomi_Redmi_Note_10_pro"<<endl
        <<""<<endl<<endl
        <<"Which mobile model of Xiaomi you want please enter it's name : "<<endl;
        cin>>modelip;
        
        if(modelip == "Xiaomi_Redmi_Note_10_pro"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Glacier_Blue"<<endl
            <<"Vintage_Bronze"<<endl<<endl
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Glacier_Blue","Vintage_Bronze"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"The specifications of your phone selected are here : "<<endl
		                <<"Build	OS	Android 11 OS "<<endl 
<<"UI	MIUI 12  "<<endl
<<"Dimensions	164.5 x 76.2 x 8.1 mm"<<endl  
<<"Weight	192 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)  "<<endl
<<"Colors	 Glacier Blue, Gradient Bronze"<<endl  
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 40(2300), 41(2500)"<<endl  
<<"Processor	CPU	Octa-core (2 x 2.3 GHz Kryo 470 Gold + 6 x 1.8 GHz Kryo 470 Silver)  "<<endl
<<"Chipset	Qualcomm SM7150 Snapdragon 732G (8 nm)  "<<endl
<<"GPU	Adreno 618  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, Multitouch"<<endl  
<<"Size	6.67 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~395 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 5  "<<endl
<<"Extra Features	120Hz, HDR10, 450 nits (typ), 1200 nits (peak) "<<endl 
<<"Memory	Built-in	128GB Built-in, 6GB RAM  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Quad Camera: 108 MP, f/1.9, 26mm (wide), 1/1.52, dual pixel PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 5 MP, f/2.4, (macro), AF + 2 MP, f/2.4, (depth) LED Flash  "<<endl
<<"Features	Geo-tagging, Phase detection, touch focus, HDR, Panorama, Video (4K@30fps, 1080p@30/60fps)  "<<endl
<<"Front	16 MP, f/2.5, (wide), 1/3.06, Panorama, Video (1080p@30fps, 720p@120fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS "<<endl 
<<"Radio	FM Radio (Unspecified)  "<<endl
<<"USB	USB Type-C 2.0  "<<endl
<<"NFC	No  "<<endl
<<"Infrared	Yes"<<endl  
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A (CA) "<<endl 
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (side mounted), Gyro, Proximity"<<endl  
<<"Audio	3.5mm Audio Jack, XviD/MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	24-bit/192kHz audio, Active noise cancellation with dedicated mic, Photo/video editor, Document viewer  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 5020 mAh  "<<endl
<<"- Fast charging 33W, 59% in 30 min (advertised)"<<endl;
		                
		                
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 44,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
          <<"Build	OS	Android 11 OS "<<endl 
<<"UI	MIUI 12  "<<endl
<<"Dimensions	164.5 x 76.2 x 8.1 mm"<<endl  
<<"Weight	192 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)  "<<endl
<<"Colors	 Glacier Blue, Gradient Bronze"<<endl  
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 40(2300), 41(2500)"<<endl  
<<"Processor	CPU	Octa-core (2 x 2.3 GHz Kryo 470 Gold + 6 x 1.8 GHz Kryo 470 Silver)  "<<endl
<<"Chipset	Qualcomm SM7150 Snapdragon 732G (8 nm)  "<<endl
<<"GPU	Adreno 618  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, Multitouch"<<endl  
<<"Size	6.67 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~395 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 5  "<<endl
<<"Extra Features	120Hz, HDR10, 450 nits (typ), 1200 nits (peak) "<<endl 
<<"Memory	Built-in	128GB Built-in, 6GB RAM  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Quad Camera: 108 MP, f/1.9, 26mm (wide), 1/1.52, dual pixel PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 5 MP, f/2.4, (macro), AF + 2 MP, f/2.4, (depth) LED Flash  "<<endl
<<"Features	Geo-tagging, Phase detection, touch focus, HDR, Panorama, Video (4K@30fps, 1080p@30/60fps)  "<<endl
<<"Front	16 MP, f/2.5, (wide), 1/3.06, Panorama, Video (1080p@30fps, 720p@120fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE  "<<endl
<<"GPS	Yes + A-GPS support & Glonass, BDS "<<endl 
<<"Radio	FM Radio (Unspecified)  "<<endl
<<"USB	USB Type-C 2.0  "<<endl
<<"NFC	No  "<<endl
<<"Infrared	Yes"<<endl  
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A (CA) "<<endl 
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (side mounted), Gyro, Proximity"<<endl  
<<"Audio	3.5mm Audio Jack, XviD/MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	24-bit/192kHz audio, Active noise cancellation with dedicated mic, Photo/video editor, Document viewer  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 5020 mAh  "<<endl
<<"- Fast charging 33W, 59% in 30 min (advertised)"<<endl;
							        cout<<"The price of your phone is : 44,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
        }
            
     }//model
     
     if(modelip == "Mi_10T"){//model
        cout<<"*******************COLOUR**********************"<<endl;
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Cosmic_Black"<<endl
			<<"Lunar_Silver"<<endl<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Cosmic_Black","Lunar_Silver"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					 <<" Build	OS	Android 10.0 OS  "<<endl
<<"UI	MIUI 12  "<<endl
<<"Dimensions	165.1 x 76.4 x 9.3 mm"<<endl  
<<"Weight	218 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM) "<<endl 
<<"Colors	Black, Silver  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 7(2600), 8(900), 20(800)"<<endl  
<<"5G Band	SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (1 x 2.84 GHz Kryo 585 + 3 x 2.42 GHz Kryo 585 + 4 x 1.80 GHz Kryo 585) "<<endl 
<<"Chipset	Qualcomm SM8250 Snapdragon 865 (7 nm+)  "<<endl
<<"GPU	Adreno 650  "<<endl
<<"Display	Technology	IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.7 Inches  "<<endl
<<"Resolution	1080 x 2340 Pixels (~386 PPI) "<<endl 
<<"Protection	Corning Gorilla Glass 4  "<<endl
<<"Extra Features	HDR10+, 144Hz refresh rate  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 3.1"<<endl  
<<"Card	No  "<<endl
<<"Camera	Main	Triple Camera: 64 MP, f/1.9, (wide), 1/1.73, PDAF + 13 MP, f/2.2, (ultrawide) + 5 MP, f/2.4, (macro, LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face detection, HDR, panorama, Video (8K@30fps, 4K@30/60fps, 1080p@30/60/120/240/960fps; gyro-EIS)  "<<endl
<<"Front	20 MP, f/2.0, (wide), 1/3, HDR, Video (1080p@30fps, 720p@120fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, DLNA, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD, aptX Adaptive  "<<endl
<<"GPS	Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS  "<<endl
<<"Radio	No  "<<endl
<<"USB	2.0, Type-C 1.0 reversible connector, USB On-The-Go"<<endl  
<<"NFC	Yes  "<<endl
<<"Infrared	Yes "<<endl 
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable (2+ Gbps DL)  "<<endl
<<"Features	Sensors	Accelerometer, Barometer, Compass, Fingerprint (side mounted), Gyro, Proximity"<<endl  
<<"Audio	24-bit/192kHz audio, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass), Glass back, Aluminum frame, Active noise cancellation with dedicated mic, Photo/video editor, Document viewer  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 5000 mAh  "<<endl
<<"- Fast charging 33W    "<<endl<<endl;
		                
		                
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 44,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
          <<" Build	OS	Android 10.0 OS  "<<endl
<<"UI	MIUI 12  "<<endl
<<"Dimensions	165.1 x 76.4 x 9.3 mm"<<endl  
<<"Weight	218 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM) "<<endl 
<<"Colors	Black, Silver  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 7(2600), 8(900), 20(800)"<<endl  
<<"5G Band	SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (1 x 2.84 GHz Kryo 585 + 3 x 2.42 GHz Kryo 585 + 4 x 1.80 GHz Kryo 585) "<<endl 
<<"Chipset	Qualcomm SM8250 Snapdragon 865 (7 nm+)  "<<endl
<<"GPU	Adreno 650  "<<endl
<<"Display	Technology	IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.7 Inches  "<<endl
<<"Resolution	1080 x 2340 Pixels (~386 PPI) "<<endl 
<<"Protection	Corning Gorilla Glass 4  "<<endl
<<"Extra Features	HDR10+, 144Hz refresh rate  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 3.1"<<endl  
<<"Card	No  "<<endl
<<"Camera	Main	Triple Camera: 64 MP, f/1.9, (wide), 1/1.73, PDAF + 13 MP, f/2.2, (ultrawide) + 5 MP, f/2.4, (macro, LED Flash  "<<endl
<<"Features	Geo-tagging, touch focus, face detection, HDR, panorama, Video (8K@30fps, 4K@30/60fps, 1080p@30/60/120/240/960fps; gyro-EIS)  "<<endl
<<"Front	20 MP, f/2.0, (wide), 1/3, HDR, Video (1080p@30fps, 720p@120fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, DLNA, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD, aptX Adaptive  "<<endl
<<"GPS	Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS  "<<endl
<<"Radio	No  "<<endl
<<"USB	2.0, Type-C 1.0 reversible connector, USB On-The-Go"<<endl  
<<"NFC	Yes  "<<endl
<<"Infrared	Yes "<<endl 
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable (2+ Gbps DL)  "<<endl
<<"Features	Sensors	Accelerometer, Barometer, Compass, Fingerprint (side mounted), Gyro, Proximity"<<endl  
<<"Audio	24-bit/192kHz audio, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass), Glass back, Aluminum frame, Active noise cancellation with dedicated mic, Photo/video editor, Document viewer  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 5000 mAh  "<<endl
<<"- Fast charging 33W    "<<endl<<endl;
							        cout<<"The price of your phone is : 44,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
        }//color
     else {
	cout<<"The input you have entered is invalid";
}
        }//model
if(modelip == "Mi_11_Lite"){//model
        cout<<"*******************COLOUR**********************"<<endl;
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Boba_Black"<<endl 
			<<"Bubblegum_Blue"<<endl
			<<"Peach_Pink"<<endl<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Boba_Black", "Bubblegum_Blue", "Peach_Pink"){//colour
		
					cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
					    <<"NETWORK	Technology"<<endl	
<<"GSM / HSPA / LTE"<<endl
<<"LAUNCH	Announced	2021, March 29"<<endl
<<"Status	Available. Released 2021, April 16"<<endl
<<"BODY	Dimensions	160.5 x 75.7 x 6.8 mm (6.32 x 2.98 x 0.27 in)"<<endl
<<"Weight	157 g (5.54 oz)"<<endl
<<"SIM	Hybrid Dual SIM (Nano-SIM, dual stand-by)"<<endl
<<"DISPLAY	Type	AMOLED, 1B colors, HDR10, 90Hz, 500 nits (typ), 800 nits"<<endl
<<"Size	6.55 inches, 103.6 cm2 (~85.3% screen-to-body ratio)"<<endl
<<"Resolution	1080 x 2400 pixels, 20:9 ratio (~402 ppi density)"<<endl
<<"Protection	Corning Gorilla Glass 5"<<endl
<<"PLATFORM	OS	Android 11, MIUI 12"<<endl
<<"Chipset	Qualcomm SM7150 Snapdragon 732G (8 nm)"<<endl
<<"CPU	Octa-core (2x2.3 GHz Kryo 470 Gold & 6x1.8 GHz Kryo 470 Silver)"<<endl
<<"GPU	Adreno 618"<<endl
<<"MEMORY	Card slot	microSDXC (uses shared SIM slot)"<<endl
<<"Internal	64GB 6GB RAM, 128GB 6GB RAM, 128GB 8GB RAM"<<endl
 <<"	UFS 2.2"<<endl
<<"MAIN CAMERA	Triple	64 MP, f/1.8, 26mm (wide), 1/1.97, 0.7µm, PDAF"<<endl
<<"8 MP, f/2.2, 119° (ultrawide), 1/4.0, 1.12µm"<<endl
<<"5 MP, f/2.4, (macro), AF"<<endl
<<"Features	Dual-LED dual-tone flash, HDR, panorama"<<endl
<<"Video	4K@30fps, 1080p@30/60/120fps; gyro-EIS"<<endl
<<"SELFIE CAMERA	Single	16 MP, f/2.5, 25mm (wide), 1/3.06 1.0µm"<<endl
<<"Features	HDR, panorama"<<endl
<<"Video	1080p@30fps, 720p@120fps"<<endl
<<"SOUND	Loudspeaker	Yes, with dual speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	24-bit/192kHz audio"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.1, A2DP, LE"<<endl
<<"GPS	Yes, A-GPS, GLONASS, BDS, GALILEO"<<endl
<<"NFC	Yes (market/region dependent)"<<endl
<<"Infrared port	Yes"<<endl
<<"Radio	Unspecified"<<endl
<<"USB	USB Type-C 2.0, USB On-The-Go"<<endl
<<"FEATURES	Sensors	Fingerprint (side-mounted), accelerometer, gyro, proximity, compass"<<endl
<<"BATTERY	Type	Li-Po 4250 mAh, non-removable"<<endl
<<"Charging	Fast charging 33W"<<endl
<<"MISC	Colors	Boba Black, Peach Pink, Bubblegum Blue"<<endl
<<"Models	M2101K9AG"<<endl
<<"Price	$ 299.00 / € 299.90 / £ 264.99"<<endl
<<"TESTS	Performance	AnTuTu: 290172 (v8) | 294251 (v9)"<<endl
<<"GeekBench: 1796 (v5.1)"<<endl
<<"GFXBench: 17fps (ES 3.1 onscreen)"<<endl
<<"Display	Contrast ratio: Infinite (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	-24.2 LUFS (Very good)"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 100h"<<endl<<endl;
		                
		                
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 44,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
          <<"NETWORK	Technology"<<endl	
<<"GSM / HSPA / LTE"<<endl
<<"LAUNCH	Announced	2021, March 29"<<endl
<<"Status	Available. Released 2021, April 16"<<endl
<<"BODY	Dimensions	160.5 x 75.7 x 6.8 mm (6.32 x 2.98 x 0.27 in)"<<endl
<<"Weight	157 g (5.54 oz)"<<endl
<<"SIM	Hybrid Dual SIM (Nano-SIM, dual stand-by)"<<endl
<<"DISPLAY	Type	AMOLED, 1B colors, HDR10, 90Hz, 500 nits (typ), 800 nits"<<endl
<<"Size	6.55 inches, 103.6 cm2 (~85.3% screen-to-body ratio)"<<endl
<<"Resolution	1080 x 2400 pixels, 20:9 ratio (~402 ppi density)"<<endl
<<"Protection	Corning Gorilla Glass 5"<<endl
<<"PLATFORM	OS	Android 11, MIUI 12"<<endl
<<"Chipset	Qualcomm SM7150 Snapdragon 732G (8 nm)"<<endl
<<"CPU	Octa-core (2x2.3 GHz Kryo 470 Gold & 6x1.8 GHz Kryo 470 Silver)"<<endl
<<"GPU	Adreno 618"<<endl
<<"MEMORY	Card slot	microSDXC (uses shared SIM slot)"<<endl
<<"Internal	64GB 6GB RAM, 128GB 6GB RAM, 128GB 8GB RAM"<<endl
 <<"	UFS 2.2"<<endl
<<"MAIN CAMERA	Triple	64 MP, f/1.8, 26mm (wide), 1/1.97, 0.7µm, PDAF"<<endl
<<"8 MP, f/2.2, 119° (ultrawide), 1/4.0, 1.12µm"<<endl
<<"5 MP, f/2.4, (macro), AF"<<endl
<<"Features	Dual-LED dual-tone flash, HDR, panorama"<<endl
<<"Video	4K@30fps, 1080p@30/60/120fps; gyro-EIS"<<endl
<<"SELFIE CAMERA	Single	16 MP, f/2.5, 25mm (wide), 1/3.06 1.0µm"<<endl
<<"Features	HDR, panorama"<<endl
<<"Video	1080p@30fps, 720p@120fps"<<endl
<<"SOUND	Loudspeaker	Yes, with dual speakers"<<endl
<<"3.5mm jack	No"<<endl
 <<"	24-bit/192kHz audio"<<endl
<<"COMMS	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl
<<"Bluetooth	5.1, A2DP, LE"<<endl
<<"GPS	Yes, A-GPS, GLONASS, BDS, GALILEO"<<endl
<<"NFC	Yes (market/region dependent)"<<endl
<<"Infrared port	Yes"<<endl
<<"Radio	Unspecified"<<endl
<<"USB	USB Type-C 2.0, USB On-The-Go"<<endl
<<"FEATURES	Sensors	Fingerprint (side-mounted), accelerometer, gyro, proximity, compass"<<endl
<<"BATTERY	Type	Li-Po 4250 mAh, non-removable"<<endl
<<"Charging	Fast charging 33W"<<endl
<<"MISC	Colors	Boba Black, Peach Pink, Bubblegum Blue"<<endl
<<"Models	M2101K9AG"<<endl
<<"Price	$ 299.00 / € 299.90 / £ 264.99"<<endl
<<"TESTS	Performance	AnTuTu: 290172 (v8) | 294251 (v9)"<<endl
<<"GeekBench: 1796 (v5.1)"<<endl
<<"GFXBench: 17fps (ES 3.1 onscreen)"<<endl
<<"Display	Contrast ratio: Infinite (nominal)"<<endl
<<"Camera	Photo / Video"<<endl
<<"Loudspeaker	-24.2 LUFS (Very good)"<<endl
<<"Battery life	"<<endl
<<"Endurance rating 100h"<<endl<<endl;
							        cout<<"The price of your phone is : 44,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
        }//color
     else {
	cout<<"The input you have entered is invalid";
}
        }//model

}//xiaomi

if (Brand=="Oppo"){//xiaomi
	cout<<"=======================OPPO====================="<<endl<<endl
	    <<"The latest mobiles released by Oppo are:"<<endl<<endl
	    <<"Reno_5_Pro"<<endl
	    <<"Oppo_F17_Pro"<<endl
        <<""<<endl<<endl
        <<"Which mobile model of Oppo you want please enter it's name : "<<endl;
        cin>>modelip;
        
        if(modelip == "Reno_5_Pro"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Astral_Blue"<<endl 
			<<"Starry_Black"<<endl<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Astral_Blue","Starry_Black"){//colour
	cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl

<<"		             Build	OS	Android 11 OS "<<endl 
<<"UI	ColorOS 11.1  "<<endl
<<"Dimensions	159.7 x 73.2 x 7.6 mm"<<endl  
<<"Weight	173 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Galactic Silver, Starry Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 800 / 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 17(700), 20(800), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500)  "<<endl
<<"5G Band	5G SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (4 x 2.6 GHz Cortex-A77 + 4 x 2.0 GHz Cortex-A55)"<<endl  
<<"Chipset	Mediatek MT6889Z Dimensity 1000+ (7nm)  "<<endl
<<"GPU	Mali-G77 MC9  "<<endl
<<"Display	Technology	Super AMOLED Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.5 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~405 PPI)  "<<endl
<<"Protection	Corning Gorilla Glass 6  "<<endl
<<"Extra Features	(~88.6% screen-to-body ratio), 90Hz, HDR10+, 800 nits (typ), 1100 nits (peak)  "<<endl
<<"Memory	Built-in	256GB Built-in, 12GB RAM  "<<endl
<<"Card	No  "<<endl
<<"Camera	Main	Quad Camera: 64 MP, f/1.7, 26mm (wide), 1/1.73, PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash  "<<endl
<<"Features	Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30fps, 1080p@30/60/120fps; gyro-EIS, HDR)  "<<endl
<<"Front	32 MP, f/2.4, 26mm (wide), 1/2., HDR, Video (1080p@30fps, gyro-EIS)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + dual-band A-GPS support, GLONASS, BDS, GALILEO, QZSS"<<endl  
<<"USB	USB Type-C 3.1, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable  "<<endl
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity"<<endl 
<<"Audio	Speaker Phone, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass), Glass back + Gorilla Glass), Aluminum frame, Active noise cancellation with dedicated mic, Document editor, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4350 mAh  "<<endl
<<"- Fast charging 65W, Reverse charging   "<<endl<<endl;
		                
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 105,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
      <<"		             Build	OS	Android 11 OS "<<endl 
<<"UI	ColorOS 11.1  "<<endl
<<"Dimensions	159.7 x 73.2 x 7.6 mm"<<endl  
<<"Weight	173 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Galactic Silver, Starry Black  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 800 / 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 7(2600), 8(900), 12(700), 17(700), 20(800), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500)  "<<endl
<<"5G Band	5G SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (4 x 2.6 GHz Cortex-A77 + 4 x 2.0 GHz Cortex-A55)"<<endl  
<<"Chipset	Mediatek MT6889Z Dimensity 1000+ (7nm)  "<<endl
<<"GPU	Mali-G77 MC9  "<<endl
<<"Display	Technology	Super AMOLED Capacitive Touchscreen, 16M Colors, Multitouch"<<endl  
<<"Size	6.5 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~405 PPI)  "<<endl
<<"Protection	Corning Gorilla Glass 6  "<<endl
<<"Extra Features	(~88.6% screen-to-body ratio), 90Hz, HDR10+, 800 nits (typ), 1100 nits (peak)  "<<endl
<<"Memory	Built-in	256GB Built-in, 12GB RAM  "<<endl
<<"Card	No  "<<endl
<<"Camera	Main	Quad Camera: 64 MP, f/1.7, 26mm (wide), 1/1.73, PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash  "<<endl
<<"Features	Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30fps, 1080p@30/60/120fps; gyro-EIS, HDR)  "<<endl
<<"Front	32 MP, f/2.4, 26mm (wide), 1/2., HDR, Video (1080p@30fps, gyro-EIS)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + dual-band A-GPS support, GLONASS, BDS, GALILEO, QZSS"<<endl  
<<"USB	USB Type-C 3.1, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable  "<<endl
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity"<<endl 
<<"Audio	Speaker Phone, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Gorilla Glass), Glass back + Gorilla Glass), Aluminum frame, Active noise cancellation with dedicated mic, Document editor, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4350 mAh  "<<endl
<<"- Fast charging 65W, Reverse charging   "<<endl<<endl;
							        cout<<"The price of your phone is : 105,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
	
	}//colour
	else {
	cout<<"The input you have entered is invalid";
}
}//model

if(modelip == "Oppo_F17_Pro"){
	
	cout<<"*******************COLOUR**********************";
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Magic_Blue"<<endl 
			<<"Matte_Black"<<endl
			<<"Metallic_White"<<endl<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Magic_Blue", "Matte_Black", "Metallic_White"){//colour
	cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
                        <<"Build	OS	Android 10.0 OS"<<endl  
<<"UI	ColorOS 7.2  "<<endl
<<"Dimensions	160.1 x 73.8 x 7.5 mm  "<<endl
<<"Weight	164 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Magic Blue, Matte Black, Metallic White"<<endl  
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500) "<<endl 
<<"Processor	CPU	Octa-core (2 x 2.2 GHz Cortex-A75 + 6 x 2.0 GHz Cortex-A55)  "<<endl
<<"Chipset	Mediatek Helio P95 (12 nm)  "<<endl
<<"GPU	PowerVR GM9446  "<<endl
<<"Display	Technology	Super AMOLED Capacitive Touchscreen, 16M Colors, Multitouch "<<endl 
<<"Size	6.4 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~409 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 3+  "<<endl
<<"Extra Features	430 nits typ. brightness (advertised)  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 2.1  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Quad Camera: 48 MP, f/1.8, 26mm (wide), 1/2.0, PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash  "<<endl
<<"Features	Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30fps, 1080p@30/120fps, gyro-EIS)  "<<endl
<<"Front	Dual 16 MP, f/2.4, (wide), 1/3  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl  
<<"Bluetooth	v5.0 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + A-GPS support, & GLONASS, GALILEO, QZSS"<<endl  
<<"Radio	FM Radio  "<<endl
<<"USB	2.0, Type-C 1.0 reversible connector, USB On-The-Go"<<endl  
<<"NFC	No  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/11.5 Mbps), 4G LTE-A  "<<endl
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Active noise cancellation with dedicated mic, Document editor, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4015 mAh  "<<endl
<<"- Fast charging 30W, 50% in 30 min, 100% in 53 min (advertised), VOOC 4.0  "<<endl<<endl;
                        
		                
				        cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 48,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
      <<"Build	OS	Android 10.0 OS"<<endl  
<<"UI	ColorOS 7.2  "<<endl
<<"Dimensions	160.1 x 73.8 x 7.5 mm  "<<endl
<<"Weight	164 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Magic Blue, Matte Black, Metallic White"<<endl  
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500) "<<endl 
<<"Processor	CPU	Octa-core (2 x 2.2 GHz Cortex-A75 + 6 x 2.0 GHz Cortex-A55)  "<<endl
<<"Chipset	Mediatek Helio P95 (12 nm)  "<<endl
<<"GPU	PowerVR GM9446  "<<endl
<<"Display	Technology	Super AMOLED Capacitive Touchscreen, 16M Colors, Multitouch "<<endl 
<<"Size	6.4 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~409 PPI)"<<endl  
<<"Protection	Corning Gorilla Glass 3+  "<<endl
<<"Extra Features	430 nits typ. brightness (advertised)  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM, UFS 2.1  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Quad Camera: 48 MP, f/1.8, 26mm (wide), 1/2.0, PDAF + 8 MP, f/2.2, (ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash  "<<endl
<<"Features	Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30fps, 1080p@30/120fps, gyro-EIS)  "<<endl
<<"Front	Dual 16 MP, f/2.4, (wide), 1/3  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl  
<<"Bluetooth	v5.0 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + A-GPS support, & GLONASS, GALILEO, QZSS"<<endl  
<<"Radio	FM Radio  "<<endl
<<"USB	2.0, Type-C 1.0 reversible connector, USB On-The-Go"<<endl  
<<"NFC	No  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/11.5 Mbps), 4G LTE-A  "<<endl
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Active noise cancellation with dedicated mic, Document editor, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4015 mAh  "<<endl
<<"- Fast charging 30W, 50% in 30 min, 100% in 53 min (advertised), VOOC 4.0  "<<endl<<endl;
      
							        cout<<"The price of your phone is : 48,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
			}
			else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl; 
			}
	
	
}

else {
	cout<<"The input you have entered is invalid";
}
}//OPPO


}//brand

if (Brand=="Vivo"){//xiaomi

	cout<<"=======================VIVO====================="<<endl<<endl
	    <<"The latest mobiles released by Vivo are:"<<endl<<endl
	    <<"Vivo_X60_Pro"<<endl
	    <<"Vivo_V20"<<endl
        <<""<<endl<<endl
        <<"Which mobile model of Vivo you want please enter it's name : "<<endl;
        cin>>modelip;
        
        if(modelip == "Vivo_X60_Pro"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Blue"<<endl 
			<<"Black"<<endl<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Blue","Black"){//colour
	cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
                    <<"Build	OS	Android 11 OS  "<<endl
<<"UI	Funtouch OS 11.1  "<<endl
<<"Dimensions	158.6 x 73.2 x 7.6 mm"<<endl  
<<"Weight	179 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)  "<<endl
<<"Colors	Black, Blue  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 8(900), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500)  "<<endl
<<"5G Band	5G SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (1 x 3.2 GHz Kryo 585 + 3 x 2.42 GHz Kryo 585 + 4 x 1.80 GHz Kryo 585)  "<<endl
<<"Chipset	Qualcomm SM8250-AC Snapdragon 870 5G (7 nm)  "<<endl
<<"GPU	Adreno 650  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, 16M Colors, Multitouch  "<<endl
<<"Size	6.6 Inches  "<<endl
<<"Resolution	1080 x 2376 Pixels (~398 PPI)  "<<endl
<<"Extra Features	120Hz, HDR10+  "<<endl
<<"Memory	Built-in	256GB Built-in, 12GB RAM"<<endl  
<<"Card	No  "<<endl
<<"Camera	Main	Triple Camera: 48 MP, f/1.5, 26mm (wide), 1/2.0, PDAF, gimbal stabilization + 13 MP, f/2.5, 50mm (portrait), 1/2.8, PDAF, 2x optical zoom + 13 MP, f/2.2, 16mm (ultrawide), LED Flash  "<<endl
<<"Features	Zeiss optics, Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30/60fps, 1080p@30/60fps, gyro-EIS) "<<endl 
<<"Front	32 MP, f/2.5, 26mm (wide), 1/2.8, HDR, Video (1080p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl  
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS, NavIC"<<endl  
<<"Radio	FM Radio  "<<endl
<<"USB	USB Type-C 2.0, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable"<<endl  
<<"Features	Sensors	Accelerometer, color spectrum, Compass, FingerPrint (under display, optical, Gyro, Proximity  "<<endl
<<"Audio	24-bit/192kHz audio, MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Glass back, aluminum frame, Active noise cancellation with dedicated mic, Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4200 mAh  "<<endl
<<"- Fast charging 33W  "<<endl<<endl;
                      cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 130,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
                 <<"Build	OS	Android 11 OS  "<<endl
<<"UI	Funtouch OS 11.1  "<<endl
<<"Dimensions	158.6 x 73.2 x 7.6 mm"<<endl  
<<"Weight	179 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)  "<<endl
<<"Colors	Black, Blue  "<<endl
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1700(AWS) / 1900 / 2100"<<endl  
<<"4G Band	LTE band 1(2100), 2(1900), 3(1800), 4(1700/2100), 5(850), 8(900), 34(2000), 38(2600), 39(1900), 40(2300), 41(2500)  "<<endl
<<"5G Band	5G SA/NSA  "<<endl
<<"Processor	CPU	Octa-core (1 x 3.2 GHz Kryo 585 + 3 x 2.42 GHz Kryo 585 + 4 x 1.80 GHz Kryo 585)  "<<endl
<<"Chipset	Qualcomm SM8250-AC Snapdragon 870 5G (7 nm)  "<<endl
<<"GPU	Adreno 650  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, 16M Colors, Multitouch  "<<endl
<<"Size	6.6 Inches  "<<endl
<<"Resolution	1080 x 2376 Pixels (~398 PPI)  "<<endl
<<"Extra Features	120Hz, HDR10+  "<<endl
<<"Memory	Built-in	256GB Built-in, 12GB RAM"<<endl  
<<"Card	No  "<<endl
<<"Camera	Main	Triple Camera: 48 MP, f/1.5, 26mm (wide), 1/2.0, PDAF, gimbal stabilization + 13 MP, f/2.5, 50mm (portrait), 1/2.8, PDAF, 2x optical zoom + 13 MP, f/2.2, 16mm (ultrawide), LED Flash  "<<endl
<<"Features	Zeiss optics, Phase detection, Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K@30/60fps, 1080p@30/60fps, gyro-EIS) "<<endl 
<<"Front	32 MP, f/2.5, 26mm (wide), 1/2.8, HDR, Video (1080p@30fps)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot"<<endl  
<<"Bluetooth	v5.1 with A2DP, LE, apt-X HD  "<<endl
<<"GPS	Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS, NavIC"<<endl  
<<"Radio	FM Radio  "<<endl
<<"USB	USB Type-C 2.0, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable"<<endl  
<<"Features	Sensors	Accelerometer, color spectrum, Compass, FingerPrint (under display, optical, Gyro, Proximity  "<<endl
<<"Audio	24-bit/192kHz audio, MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone  "<<endl
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM"<<endl  
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front + Glass back, aluminum frame, Active noise cancellation with dedicated mic, Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4200 mAh  "<<endl
<<"- Fast charging 33W  "<<endl<<endl;    
      
							        cout<<"The price of your phone is : 130,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}

}//proceed
else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
}//color
else{
	cout<<"your input is invalid sorry!! :(";
}

}//model


        if(modelip == "Vivo_V20"){//model
        cout<<"*******************COLOUR**********************";
        cout<<"There are these colours available in this model :"<<endl<<endl
            <<"Sunset_Melody"<<endl 
			<<"Midnight_Jazz"<<endl
			<<"Moonlight_Sonata"<<endl
            
            <<"Please enter the colour you want: "<<endl;
            cin>>colourip;
            
            if(colourip == "Sunset_Melody", "Midnight_Jazz", "Moonlight_Sonata "){//colour
	cout<<"The requirements are completed"<<endl<<endl;
					cout<<"=================INFORMATION=============="<<endl<<endl
                    <<"Build	OS	Android 11 OS  "<<endl
<<"UI	Funtouch OS 11  "<<endl
<<"Dimensions	161.3 x 74.2 x 7.4 mm"<<endl  
<<"Weight	171 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Sunset Melody, Midnight Jazz, Moonlight Sonata "<<endl 
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 20(800), 28(700), 38(2600), 40(2300), 41(2500)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.3 GHz Kryo 465 Gold + 6 x 1.8 GHz Kryo 465 Silver)  "<<endl
<<"Chipset	Qualcomm SM7125 Snapdragon 720G (8 nm)  "<<endl
<<"GPU	Adreno 618  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, 16M Colors, Multitouch  "<<endl
<<"Size	6.4 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~409 PPI)  "<<endl
<<"Extra Features	HDR10  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Triple Camera: 64 MP, f/1.9, 26mm (wide), 1/1.72, PDAF + 8 MP, f/2.2, 16mm (ultrawide), 1/4.0, AF + 2 MP, f/2.4, (depth), dual-LED dual-tone flash  "<<endl
<<"Features	Phase detection, touch focus, Geo-tagging, HDR, panorama, Video (4K@30fps, 1080p@30/60fps, gyro-EIS)  "<<endl
<<"Front	44 MP, f/2.0, (wide), AF, HDR, Video (4K@30fps, 1080p@30fps, gyro-EIS)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE  "<<endl
<<"GPS	Yes + A-GPS support, & GLONASS, BDS"<<endl  
<<"USB	USB Type-C 2.0, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G, 4G "<<endl 
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, 24-bit/192kHz audio, MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone "<<endl 
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front, plastic back, plastic frame, Active noise cancellation with dedicated mic, Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4000 mAh  "<<endl
<<"- Fast battery charging 33W  "<<endl<<endl;
                      cout<<"=================PRICE=============="<<endl<<endl;
cout<<"Now do you want to further proceed and wanna know the price of phone?"<<endl
					    <<"If you want to proceed press A"<<endl<<endl;
					    cin>>proceedip;
					    
					    if(proceedip == 'A'){//proceeding
					    	cout<<"The price of your phone is 55,000 only."<<endl<<endl<<endl;
					    	cout<<"=================information=============="<<endl<<endl

                                <<"Do you want to see all information collectively?"<<endl
							    <<"If you want to see press B"<<endl<<endl;
							    cin>>infoip;
		
							    if(infoip=='B'){//infoip
							    cout<<endl<<"Your selected phone brand is : "<<Brand<<endl
							        <<"Colour of model "<<modelip<<" is : "<<colourip<<endl
							        <<"The specifications of your phone selected are here : "<<endl
                  <<"Build	OS	Android 11 OS  "<<endl
<<"UI	Funtouch OS 11  "<<endl
<<"Dimensions	161.3 x 74.2 x 7.4 mm"<<endl  
<<"Weight	171 g  "<<endl
<<"SIM	Dual Sim, Dual Standby (Nano-SIM)"<<endl  
<<"Colors	Sunset Melody, Midnight Jazz, Moonlight Sonata "<<endl 
<<"Frequency	2G Band	SIM1: GSM 850 / 900 / 1800 / 1900"<<endl
<<"SIM2: GSM 850 / 900 / 1800 / 1900  "<<endl
<<"3G Band	HSDPA 850 / 900 / 1900 / 2100  "<<endl
<<"4G Band	LTE band 1(2100), 3(1800), 5(850), 7(2600), 8(900), 20(800), 28(700), 38(2600), 40(2300), 41(2500)  "<<endl
<<"Processor	CPU	Octa-core (2 x 2.3 GHz Kryo 465 Gold + 6 x 1.8 GHz Kryo 465 Silver)  "<<endl
<<"Chipset	Qualcomm SM7125 Snapdragon 720G (8 nm)  "<<endl
<<"GPU	Adreno 618  "<<endl
<<"Display	Technology	AMOLED Capacitive Touchscreen, 16M Colors, Multitouch  "<<endl
<<"Size	6.4 Inches  "<<endl
<<"Resolution	1080 x 2400 Pixels (~409 PPI)  "<<endl
<<"Extra Features	HDR10  "<<endl
<<"Memory	Built-in	128GB Built-in, 8GB RAM  "<<endl
<<"Card	microSDXC (dedicated slot)  "<<endl
<<"Camera	Main	Triple Camera: 64 MP, f/1.9, 26mm (wide), 1/1.72, PDAF + 8 MP, f/2.2, 16mm (ultrawide), 1/4.0, AF + 2 MP, f/2.4, (depth), dual-LED dual-tone flash  "<<endl
<<"Features	Phase detection, touch focus, Geo-tagging, HDR, panorama, Video (4K@30fps, 1080p@30/60fps, gyro-EIS)  "<<endl
<<"Front	44 MP, f/2.0, (wide), AF, HDR, Video (4K@30fps, 1080p@30fps, gyro-EIS)  "<<endl
<<"Connectivity	WLAN	Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot  "<<endl
<<"Bluetooth	v5.1 with A2DP, LE  "<<endl
<<"GPS	Yes + A-GPS support, & GLONASS, BDS"<<endl  
<<"USB	USB Type-C 2.0, USB On-The-Go  "<<endl
<<"NFC	Yes  "<<endl
<<"Data	GPRS, Edge, 3G, 4G "<<endl 
<<"Features	Sensors	Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity  "<<endl
<<"Audio	3.5mm Audio Jack, 24-bit/192kHz audio, MP4/H.264 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone "<<endl 
<<"Browser	HTML5  "<<endl
<<"Messaging	SMS(threaded view), MMS, Email, Push Mail, IM  "<<endl
<<"Games	Built-in + Downloadable  "<<endl
<<"Torch	Yes  "<<endl
<<"Extra	Glass front, plastic back, plastic frame, Active noise cancellation with dedicated mic, Document viewer, Photo/video editor  "<<endl
<<"Battery	Capacity	(Li-Po Non removable), 4000 mAh  "<<endl
<<"- Fast battery charging 33W  "<<endl<<endl;
      
							        cout<<"The price of your phone is : 55,000"<<endl;
										cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl<<endl<<endl;
							    
									}
						else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}

}//proceed
else{
							  	cout<<"Thanks for visiting our shop :)"<<endl
							    <<"Take care, bye."<<endl;      
			}
}//color
else{
	cout<<"your input is invalid sorry!! :(";
}

}//model


else{
	cout<<"your input is invalid sorry!! :(";
}

}//vivo


}
			string showbrand(){
				
			}
			
};
int main()
{
	string cname;
	string cnic;
	string brand;
	string repeat;
 	    system("color F2");
		 
 	cout<<"==============================================================================================="<<endl
 	    <<"==============================================================================================="<<endl<<endl<<endl
 	    <<"     **     **  **   **  ****  **  **  *****  *****  *****  ******  **       "<<endl
 	    <<"     **     **  ***  **   **   **  **  **     **  *  *      **  **  **       "<<endl
 	    <<"     **     **  ** * **   **   **  **  *****  *****  *****  ******  **             "<<endl
 	    <<"     ***   ***  **  ***   **   **  **  **     ** *       *  **  **  *******       "<<endl
 	    <<"      *******   **   **  ****     *    *****  **  *  *****  **  **  *******"<<endl<<endl
		<<"   **  **   **   *****  **  **      ******     ******  *    *  *****  *****       "<<endl
		<<"   ******  *  *  **  *  **  **      ***        *       *    *  *   *  *   * "<<endl
		<<"   *  * *  *  *  *****  **  **      ******     ******  ******  *   *  *****"<<endl
		<<"   **  **  *  *  *   *  **  **      ***             *  *    *  *   *  *    "<<endl
		<<"   **  **   **   *****  **  ******  ******     ******  *    *  *****  *      "<<endl 
		<<"................................................................................................"<<endl
 	    <<"================================================================================================"<<endl<<endl<<endl<<endl
		<<"Hello!! WELCOME TO 'THE UNIVERSAL MOBILE SHOP'"<<endl<<endl
	    <<"This is a universal mobile shop."<<endl
		<<"Here you can find almost every latest mobile of every company "
	    <<"with it's specification and market rate."<<endl<<endl;
	
	cout<<"Hey young man What's your name? "<<endl<<endl;
    cin>>cname;
    
    mobile_shop obj1;
    obj1.set(cname);
	
	cout<<"So Welcome  "<<obj1.get()
	<<" to the shop we will try our level best to provide you our best services"<<endl<<endl;
	
	cout<<"Please enter your cnic number before further processing:";
	cin>>cnic;
	obj1.set1(cnic);
	
	cout<<"Thanks for entering your cnic number."<<endl
	    <<"your cnic number is : "<<obj1.get1()<<endl<<endl;
	    
	    
	    obj1.brand();
   
		    
return 0;
}
