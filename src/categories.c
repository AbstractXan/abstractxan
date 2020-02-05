Category home = create_category("home");

Page about_me = create_page("about");

add_part(&about_me,"Me","<p> <img class='thumbnail' style='width:200px' src='https://pbs.twimg.com/profile_images/1136164853003849729/FFFdBGmk_400x400.png'> </p><p>Hello, I'm Priyansh Sangule, 4th year Computer Science and Engineering student at <a href='https://www.iittp.ac.in'>IIT Tirupati</a>. I am a programmer and casual artist.</p>"); 
add_part(&about_me,"Contribute","<p>Source files for my projects could be found on <a href='https://www.github.com/abstractxan'>Github</a>. This website is made with C99 and forked from <a href='https://www.github.com/hundredrabbits/100r.co'>hundredrabbits/100r</a>. Source files for my website are available <a href='https://www.github.com/abstractxan/abstractxan/tree/master/src'>here</a>.</p> <p>Inspired by <a href='https://solar.lowtechmagazine.com/2018/09/how-to-build-a-lowtech-website/'>low-tech web design</a>, most images on this website are <i>dithered</i>.</p> <p>Found a typo? Feel free to open an <a href='github.com/abstractxan/abstractxan/issues/new'>issue</a>.</p>");
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
Category resources = create_category("Resources");
Page cse = create_page("Computer Science");
add_part(&cse,"General","<p> University of Washington <a href='https://courses.cs.washington.edu/courses/cse410/99au/lectures/'>slides</a></p>");
add_page(&resources, &cse);

Category enigma = create_category("Enigma");
Page enigma2020 = create_page("Enigma 2020");
add_part(&enigma2020,"About","<img src='../media/enigma/poster.png'><p>Enigma is a competitive ciphering and deciphering heist while looking for clues in the gigantic internet universe. Explore some amazing corners of the web-battling out puzzles and reading between the lines. Got stuck on some questions? Work your way out through your search engines. </p>");
add_part(&enigma2020,"Leaderboard","<p><ul><li><b>290 / 355 Kowalski Analysis</b></li><li><b>285 / 355 Living Immortals</b></li> <li>270 / 355 Chillminati</li> <li>270 / 355 Aam Aadmi Party</li> <li>260 / 355 Pigs Are Awesome</li> <li>240 / 355 404!</li> <li>225 / 355 Team Snow</li> <li>215 / 355 strugglers</li> <li>200 / 355 Cicada3301</li> <li>180 / 355 the beacons</li> <li>145 / 355 turingBois</li> <li>135 / 355 The Deathly Hallows</li> <li>120 / 355 execute ?</li> <li>120 / 355 DedSec</li> <li>120 / 355 Anything is fine</li> <li>60 / 355 SaCreD MaFiA</li></ul></p>");
add_part(&enigma2020,"Goal","<p>Enigma as a medium is our way of exposing the participants to a myriad of exciting places on the internet. We strive to provide an unparalleled experience similar to an open world game — explore the depths of internet for clues, crack mind-bending puzzles, and get to know more about the rad things people are doing in the world.</p><p>Every team's journey is unique and depends on how they approach a problem. Every question has a unique solution and it doesn't matter what path you take, it's important to remember <b>what</b> you're looking for. It's easy to get lost, you see.</p>");
add_part(&enigma2020,"Rules","<p>Rulebook can be found <a href='../media/enigma/rulebook.pdf'>here</a></p>");
add_part(&enigma2020,"Questions","<p>Questions will be posted here soon.</p>");
add_part(&enigma2020,"Creators","<div class='row' style='height:auto'><div style='float: left;max-width:25%'> <img class='thumbnail' src='https://pbs.twimg.com/profile_images/1136164853003849729/FFFdBGmk_400x400.png'></div> <div style='float:left'><p><b>Priyansh Sangule</b></p><p>Prelims & Finals</p></div></div> <div class='row'><div style='float: left; max-width:25%'> <img class='thumbnail' src = 'https://pbs.twimg.com/profile_images/1020017161190879232/nIzK9fNr_400x400.jpg'></div> <div><b> Anup Kulkarni</b><p>Prelims & Finals</p></div></div> <div class='row' style='height:auto'><div style='float: left;max-width:25%'> <img class='thumbnail' src='https://scontent.fmaa8-1.fna.fbcdn.net/v/t1.0-9/p960x960/35551558_1998725663776165_5836937181775527936_o.jpg?_nc_cat=110&_nc_ohc=ScFYxe7cTKgAX9NpvLJ&_nc_ht=scontent.fmaa8-1.fna&_nc_tp=6&oh=72b00ef9d26e31be2c1f02f7f2233446&oe=5ED5BF9D'> </div> <div><b>Aditya Chaudhary </b><p>Prelims</p></div></div> <div class='row' style='height:auto'><div style='float: left;max-width:25%'> <img class='thumbnail' src='https://instagram.fhyd6-1.fna.fbcdn.net/v/t51.2885-19/s150x150/70601826_479838035933997_6856475423283347456_n.jpg?_nc_ht=instagram.fhyd6-1.fna.fbcdn.net&_nc_ohc=hpw9WVfvyBYAX-j4XYW&oh=ca18e7a05420a7f145db61d4bf187f3a&oe=5EC37A6F'> </div> <div><b>Sibibalan </b><p>Prelims</p></div></div>");
add_page(&enigma,&enigma2020);

Page enigma2019 = create_page("Enigma 2019");
add_part(&enigma2019,"About","<p>Enigma is a competitive ciphering and deciphering heist while looking for clues in the gigantic internet universe. Explore some amazing corners of the web-battling out puzzles and reading between the lines. Got stuck on some questions? Work your way out through your search engines.</p>");
add_part(&enigma2019,"Feedback","<p><ul><li>\"Some are mind-bending, some are deep, some are clueless. It's an awesome experience overall.\" <b> — Sai Krupa Reddy, IIT Tirupati</b></li><br><li>\"Even though we couldn't come up with proper logics or answers, it was fun!!\"<li><b>—Hemangi Doye, IIM Indore</b></li><br><li>\"Horiffying. Enthralling. We loved it! Enjoyed the ride. Wish to solve many more of these again and again.\"<b> — Aparna Vadlamani, IIT Tirupati</b></li><br><li>\"It is an awesome,  brain storming event and best one I have ever attempted. I would love to participate even after my B.Tech.\"<b> — Sai Sumanth Vanka, IIT Tirupati</b></li></ul></p>");
add_part(&enigma2019,"Insight","<p> Insights for the event could be found <a href='../media/enigma/enigma_2019_insights.png'>here</a></p><p>According to the statistics, we found the prelims results to be really skewed even though the questions were relatively simple compared to finals. We decided to increase the duration of the Prelims for the next event to 12 hours.</p>");
add_part(&enigma2019,"Leaderboards","<p>The following list contains the marks scored and members for the respective teams for Enigma2019 Finals.</p><p><ul><li>222 / 469 Raghav Dhawan | B. Varnika | Sandalika Sapra </li><li>203 / 469 Jakku Sai Krupa Reddy | Dasari Merwin | Sathwik Matsa </li><li>202 / 469 Sai Sumanth Vanka | Vuduthala Pratyusha | Tapan Ganatma </li><li>201 / 469 Aakash Yadav | Bhomik | Vishal </li><li>151 / 469 Rutvik Bade | Ayush Garg | Ravi Shrivatsa </li><li>146 / 469 V Dheeraj | Kalicheti Rishitha</li><li>143 / 469 A Chaitanya | Charan Sai | G Yaswanth </li><li>123 / 469 Manoj kumar | Ritesh Sai T. | Akhil Bharadwaj</li><li>116 / 469 Vasunith Kislay | Manish Kumar Shrivastava | Tejasva Motsara</li><li>101 / 469 Sriram | Akhil | Chandan</li><li>85  / 469 Rohith Sudheer | Prudvi Venkat | Shubham Sangle </li><li> 83  / 469 Reena Deshmukh</li><li> 79  / 469 Aparna Vadlamani | G Sushmita</li><li> 69  / 469 Bodapati Nirupama Sai | Ambati Amulya | Balasa Niharika </li><li> 68  / 469 Ajinkya Kamble | Krishan Kumar Rao | Nakshatra Gupta</li><li> 67  / 469 Raj Garg | Abhishek Kaushik | Deep Ghadiyali </li><li> 66  / 469 Shubhankar Bhadra</li><li> 66  / 469 Abhishek Kumar | Arnab Dutta | Devayan Barindranath Ghosh </li><li> 66  / 469 Shaik Irfan | Vinay Koneru | Yashwant Sai Koneru</li><li> 39  / 469 Nandita V Nair | Kaushal Pillay | Revathy Sajeev </li></ul></p>");
add_part(&enigma2019,"Questions","<p>Prelims questions were created by both <a href='https://www.twitter.com/AnupKulkarn1'>Anup Kulkarni</a> and I. Questions for finals were created by me. Questions could be found here: <a href='enigma_2019_prelims.html'>prelims</a></p>");
add_page(&enigma,&enigma2019);


//Separate Page
Page enigma2019prelims = create_page("Enigma 2019 Prelims");
add_part(&enigma2019prelims,"Rules","<p>Event is 3hrs from 9 to 12pm (midnight). Only one submission per team. Multiple submission will lead to disqualification. Enter valid names as registered on Tirutsava website. Failing to do so will lead to disqualification</p><p><ol><li>1.1 We strongly recommend using internet the greatest gift of the god to its fullest potential.</li><li>1.2 Failure to use god's gift will be considered as blasphemy and the participant will be rendered unable to solve even a single question.</li><li>2 We all at enigma love wearing hats and will greatly appreciate not using any caps in the answers.</li><li>3 Due to recent court hearings all contestants are required to enjoy the storyline embedded in the contest. Failure to do so will result in boredom.</li><li>4 Order of court can be ignored but one shall not ignore the order of questions.</li><li>5 Thou shall be ranked by your intellectual potential to score marks and submit fast</li><li>6 Thou shalt doubt our intellect by wondering how many answers a question has. Just like god they is only one true answer and that's ours.</li><li>7 Thou shall submit on or before 12 midnight</li></ol></p><p></p><p>Special thanks to people who just convinced coke to sponsor <a href='https://www.tirutsava.com'>Tirutsava</a></p><p>Wubba Lubba Dub Dub!</p>");
add_part(&enigma2019prelims,"Enigma 2: Paradise Falls", "<p>In a future far unseen an architect was busy working on a paradise for the whole humanity. It  was a world without suffering, an Utopian society and a prison for minds trapped in the dimension of virtual reality.</p><p>It was a facade build to enslave the minds. It was the matrix.</p><p>It was the first prototype matrix which stimulated the New-York city. Equipped with all the pleasure one can wish for it was just one component away from completion. The matrix was filled with millions of trapped minds. It needed much required order and someone to maintain it for eternal of enslavement of the human race.</p>");
add_part(&enigma2019prelims,"Chapter 1: The first program","<p>Program of Agent Smith was almost done all it needed was the initiation sequence, hidden in plain sight for everyone to see the sequence was also supposed to be the first sentence of the unstoppable program called Agent Smith.</p><p>1. Enter the initiation sequence [1 point]</p>");
add_part(&enigma2019prelims,"Chapter 2: Et tu, Brute?","<p>Agent Smith received the communication protocol to interact with other programs in the Matrix. Once initiated, his memory was flooded with welcome messages. But one caught his attention the most.</p><p>2. anfuvfivbyngvat [1 point]</p>");
add_part(&enigma2019prelims,"Chapter 3: Browsing the Matrix","<p>Agent Smith scanned the log files in search of the sender. The name of which appeared to be a code.</p><p>3. #FF0000 Panda [2 points]</p>");
add_part(&enigma2019prelims,"Chapter 4: The Company of Myself","<p>A girl turned on her computer inside her \"new\" house in New-York. This new-comer to the matrix was met with a strange message on her PC screen \"#FF0000 Panda  invites you to play the GAME\" well that was a bit weird.</p><p><a href='https://www.kongregate.com/games/2DArray/the-company-of-myself'>kongregate.com/games/2DArray/the-company-of-myself</a></p><p>4. Minimum number of shadows needed in level 19 [3 point]</p><p>5. Minimum number of lever presses by \"Jack\" (the hat man) needed to finish the game. Ignore levers triggered by images [3 point]</p>");
add_part(&enigma2019prelims,"Chapter 5: 2̶0̶4̶8̶ 2084","<p>Adriana felt something she had not felt before in this strange new city of New-York. Next day her screen was ready with another message:</p><ul><li>\"The prime program chooses one to be free, are you worthy?\"</li><li> \"Arjen Anthony Lucassen\"</li><li> \"ITBlueMagma\"</li></ul></p><p>6. r/X ; 'X'=? [5 points]</p><p>Corner case end</p><p>X is the answer but not the correct one.</p><p>7. Vigenére agrees - you know the key. [5 points]</p>");
add_part(&enigma2019prelims,"Chapter 6: The Kombat","<p>8. \"Only person to follow the relative by the marriage whose blood code is 45-26\"[8 points]</p>");
add_part(&enigma2019prelims,"Chapter 7: Intertwined","<p>Adriana progresses further</p><p>9. Part 1: {87.73, -86.18, 83.18} lacieb nag a ram [13 points]</p><p>10. Part 2: Answer to Part 2 = Answer to part 1 + sativum [13 points]</p><p>11. Part 3: Gabriel Picolo's famous series has this character [13 points]</p><p>12. Part 4: If this sentence is true, then Santa Claus exists. Is the answer to this question 'No'? What is common in the above statements. [13 points]</p><p>13. End of Chapter 6: Final hint: u/onionchowder. All above answers point to this. [13 points]</p>");
add_part(&enigma2019prelims,"Chapter 8: The Golden Commandment","<p>Adriana was confused by all the random questions but she was still curious. World around her had always felt odd to her but she could never figure out what was so wrong with this apparently perfect world? What was that little something her world lacked? Her monitor blinked again this time with a link.</p> <p><i>\"<a href='https://youtu.be/i2TMDz05I7k'>https://youtu.be/i2TMDz05I7k</a>\".</i></p><p>\"This is the Golden Question you always had in your heart. So hurry up and get there fast. Before it is destroyed by a certain someone who might reach there before you\".</p><p>14. The first team to crack will be the only one to solve. And this realization made Adriana Shiver [21 points]</p>");
add_part(&enigma2019prelims,"Chapter 9: The Chase Begins","<p>Agent Smith was relieved to finally track down rogue program #FF0000 Panda. He transferred all remains of the #FF0000 Panda to his memory and started looking for the loose ends.</p>");
add_part(&enigma2019prelims,"Chapter 10: The Turing Machine","<p>Eliminating the girl and erasing everything was what Agent Smith desired. He reached her apartment to find her PC on and transmitting a video. It had a unbreakable code as its password but he had an infinite mind at his disposal.</p><p>\"It was the first machine of its kind designed to destroy the old world \"</p><p>\"You Know What BM3? some squares have magical properties\"</p><p>\"hzyoi kbnsw uqbhg ltfsg pyrkz mkldz yap\"</p><p>15. Enter The Password [33 points]</p>");
add_part(&enigma2019prelims,"Epilogue: The Final Sequence","<p>Adriana tuned in a news channel. \"Good people of New-York, don\'t believe the false information spread by some terrorists to harm our great nation. NYPD has made multiple arrests in past couple of weeks regarding the video broadcast by the same terrorist outfit to induce widespread public fear.\" She quickly turned it off and leaned back on her chair. The people were slowly rejecting the matrix just like her unable to cope up with the reality so perfect. Symptoms were visible from last few weeks and everyone was feeling them. Things were getting progressively bad. She was feeling her vision slowly get blurry. She got up and walked to the balcony. People on street were falling down and cars were crashing into objects and people one after other. But she couldn\'t see any of it as her vision quickly faded and her head became light. It was the most sad day of the Architect\'s life as her precision matrix was off the grid. The perfect place of humanity was rejected by its inhabitants The Paradise Matrix has fallen.</p><p>16. I hope you\'ve been watching closely [54 points] </p>");

Category misc = create_category("Miscellaneous");
Page sketchbook2019 = create_page("Sketchbook 2019");
add_part(&sketchbook2019,"","<div class='sketchbook'><img src='../media/sketchbook2019/Sketchbook2019-02.jpg'><p><sub></sub></p><img src='../media/sketchbook2019/Sketchbook2019-03.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-04.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-05.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-06.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-07.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-08.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-09.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-10.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-11.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-12.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-13.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-14.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-15.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-16.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-17.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-18.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-19.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-20.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-21.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-22.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-23.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-24.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-25.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-26.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-27.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-28.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-29.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-30.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-31.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-32.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-33.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-34.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-35.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-36.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-37.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-38.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-39.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-40.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-41.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-42.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-43.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-44.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-45.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-46.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-47.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-48.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-49.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-50.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-51.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-52.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-53.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-54.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-55.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-56.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-57.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-58.jpg'> <img src='../media/sketchbook2019/Sketchbook2019-59.jpg'></div>");
add_page(&misc, &sketchbook2019);

Category *categories[] = {&home, &blog, &resources, &enigma, &misc};
Page *separate_pages[] = {&enigma2019prelims};

