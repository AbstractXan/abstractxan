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
add_part(&enigma2019,"About","<p>Enigma is a competitive ciphering and deciphering heist while looking for clues in the gigantic internet universe. Explore some amazing corners of the web-battling out puzzles and reading between the lines. Got stuck on some questions? Work your way out through your search engines.</p>");
add_part(&enigma2019,"Goals","");
add_part(&enigma2019,"Feedback","");
add_part(&enigma2019,"Leaderboard","");
add_part(&enigma2019,"Questions","Enigma event questions could be found <a href='enigma_2019_prelims.html'>here</a>");
add_page(&enigma,&enigma2019);


Page enigma2019questions = create_page("Enigma 2019 Prelims");
add_part(&enigma2019questions,"Enigma 2: Paradise Falls", "<p>In a future far unseen an architect was busy working on a paradise for the whole humanity. It  was a world without suffering, an Utopian society and a prison for minds trapped in the dimension of virtual reality.</p><p>It was a facade build to enslave the minds. It was the matrix.</p><p>It was the first prototype matrix which stimulated the New-York city. Equipped with all the pleasure one can wish for it was just one component away from completion. The matrix was filled with millions of trapped minds. It needed much required order and someone to maintain it for eternal of enslavement of the human race.</p>");
add_part(&enigma2019questions,"Chapter 1: The first program","<p>Program of Agent Smith was almost done all it needed was the initiation sequence, hidden in plain sight for everyone to see the sequence was also supposed to be the first sentence of the unstoppable program called Agent Smith.</p><p>1. Enter the initiation sequence [1 point]<p>");
add_part(&enigma2019questions,"Chapter 2: Et tu, Brute?","<p>Agent Smith received the communication protocol to interact with other programs in the Matrix. Once initiated, his memory was flooded with welcome messages. But one caught his attention the most.</p><p>2. anfuvfivbyngvat [1 point]<p>");
add_part(&enigma2019questions,"Chapter 3: Browsing the Matrix","<p>Agent Smith scanned the log files in search of the sender. The name of which appeared to be a code.</p><p>3. #FF0000 Panda [2 points]<p>");
add_part(&enigma2019questions,"Chapter 4: The Company of Myself","<p>A girl turned on her computer inside her \"new\" house in New-York. This new-comer to the matrix was met with a strange message on her PC screen \"#FF0000 Panda  invites you to play the GAME\" well that was a bit weird.</p><p>https://www.kongregate.com/games/2DArray/the-company-of-myself</p><p>4. Minimum number of shadows needed in level 19 [3 point]<p><p>5. Minimum number of lever presses by \"Jack\" (the hat man) needed to finish the game. Ignore levers triggered by images [5 point]</p>");
add_part(&enigma2019questions,"Chapter 5: 2̶0̶4̶8̶ 2084","<p>Adriana felt something she had not felt before in this strange new city of New-York. Next day her screen was ready with another message:</p><ul><li>\"The prime program chooses one to be free, are you worthy?\"</li><li> \"Arjen Anthony Lucassen\"</li><li> \"ITBlueMagma\"</li></ul></p><p>5. r/X ; 'X'=?[8 point]</p>");
add_page(&enigma,&enigma2019questions);

Category *categories[] = {&home, &blog, &enigma};