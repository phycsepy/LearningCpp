#include <iostream>
#include <curl/curl.h>



int main(){


auto file_name = "youtubevideo.mp4";
CURL *curl;
FILE *fp;
int  res{0};
fp = fopen( file_name,"wb");

std::string link= "https://www.youtube.com/watch?v=PQF_IU2YXIg&ab_channel=HathibelagalProductions"; 

curl= curl_easy_init();
curl_easy_setopt(curl,CURLOPT_URL,link);

curl_easy_setopt(curl,CURLOPT_WRITEDATA,fp);

res = curl_easy_perform(curl);

if( res == CURLE_OK){
   std::cout << "done";
}

else {
    std::cout << "not done" << ;
}

fclose(fp);
curl_easy_cleanup(curl);

return 0;
}