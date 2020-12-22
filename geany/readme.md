### Steps to setup geany:

1. Download geany through : sudo apt-get install geany   or for manjaro   sudo pacman -S geany ...I love manjaro thats why I sm using it for now.

2. Install curls-braces plugin.

3. Now in snippets.conf:
	* Remove "#~ " sign from the "[C++]" and make it the first word of the line by removing all the spaces of its left side.
	* Right a key like " quote=cout<<"Amit"; " *note: Don't include double quotes.
	* The value of key will be raw source code in one line.
	
	* Now get your source code on vscodium.
	* Put \n and \t where needed to replicate the actual code.
	* Now select all by ctrl+a and press f1 , search for join lines and click on it.
	* It will make multiliner code , a oneliner.
	* Caution: after making it oneliner do consider pretifying it by removing extra space after \n you have just put before making it oneliner.
	* Now goto the snippets.conf file and make a key under [c++] (in this case)
	* For me the key is like: cptemp=oneliner_source_code
	* Now save the bloody file and create a .cpp file. And check by writing the key and pressing <Tab> key right after the last charecter of the key.
	
	* Now if you find any odds, just debug it.
	* To pretify it as your wish, you have to kill sometime for me it was 4hrs.
	
	* Hence, just copy the optimal codes of the best_setting.cpp file and just make it like key=best_setting's_source_code
	

4. Again, you may need to extend the file by adding new macros. For that case just tweak the best_setting file. How?

	* First make the tested multiliner code oneliner. The copy it and paste it to the desired place into the best_setting file.
	
