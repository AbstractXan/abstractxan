Category home = create_category("home");

Page about_me = create_page("about");
add_part(&about_me,"Me","<p>Hello, I'm Priyansh Sangule, 4th year Computer Science and Engineering student at <a href='https://www.iittp.ac.in'>IIT Tirupati</a>. I am a programmer and casual artist.</p>"); 
add_part(&about_me,"Contribute","<p>Source files for my projects could be found on <a href='https://www.github.com/abstractxan'>Github</a>. This website is made with C99 and forked from <a href='https://www.github.com/hundredrabbits/100r.co'>hundredrabbits/100r</a>. Source files for my website are available <a href='https://www.github.com/abstractxan/abstractxan/tree/master/src'>here</a>.</p> <p>Found a typo? Feel free to open an <a href='github.com/abstractxan/abstractxan/issues/new'>issue</a>.</p>");
add_page(&home, &about_me);
// Page mission = create_page("mission");
// add_page(&home, &mission);

// Page philosophy = create_page("philosophy");
// add_page(&home, &philosophy);

// Page videos = create_page("videos");
// add_page(&home, &videos);

// Page support = create_page("support");
// add_page(&home, &support);

// Page library = create_page("library");
// add_page(&home, &library);

// Page press = create_page("press");
// add_page(&home, &press);
Category blog = create_category("blog");
Page first_post = create_page("first post");
add_part(&first_post,"Welcome","Blog is under construction");
add_page(&blog,&first_post);
//Category knowledge = create_category("knowledge");
// Category tools = create_category("tools");
//Category games = create_category("games");
// Category books = create_category("books");
Category enigma = create_category("Events");
Page enigma2020 = create_page("Enigma 2020");
add_part(&enigma2020,"About","<img src='../media/enigma/poster.png'><p>Enigma is a competitive ciphering and deciphering heist while looking for clues in the gigantic internet universe. Explore some amazing corners of the web-battling out puzzles and reading between the lines. Got stuck on some questions? Work your way out through your search engines.</p>");
add_part(&enigma2020,"Rules","<p>Rulebook can be found <a href='../media/enigma/rulebook.pdf'>here</a><p>");
add_page(&enigma,&enigma2020);
add_part(&enigma2020,"Format","<p>Previous year question paper could be found <a href='enigma_2019.html'>here</a></p>");

Page enigma2019 = create_page("Enigma 2019");
add_page(&enigma,&enigma2019);
Category *categories[] = {&home, &blog, &enigma};