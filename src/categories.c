Category home = create_category("home");
Page about_me = create_page("about me");
add_part(&about_me, "xan","I'm a 4th year Computer Science and Engineering student"); 
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

Category knowledge = create_category("knowledge");
// Category tools = create_category("tools");
Category games = create_category("games");
// Category books = create_category("books");

Category *categories[] = {&home, &knowledge, &blog, &games};