#include<fstream>
#include"reader.cpp"

using namespace std;

void createSite(string filename, string path){
    Category ** cats;
    int categoryCount = 0;
    cats = createCategories(&categoryCount, filename);
    cout << "Categories found: " << categoryCount << endl;

    conf = configParser();
    html_header = "<header>"+conf->header+"</header>";
    html_footer = "<footer><p>"+conf->footer+"</p></footer></body></html>";
    //Debug categories
    //printContent(cats,categoryCount);

    buildHome(cats,categoryCount,path);
    for(int i=0; i<=categoryCount;i++){ //Build all pages including seperate pages
        Category tempCat = *cats[i];

        for(int pageno=0;pageno<tempCat.pageCount;pageno++){
            Page * tempPage = tempCat.pages[pageno];
            buildPage(tempPage,path);
        }
    }
}

int main(int argc,char *argv[]){
    
    for (int i=0 ; i < argc; i++){
        string arg(argv[i]);
        if ( arg == "-a"){
            cout << "yes" << endl;
            createSite("../archive/archive.md","../archive/");
        }
    }
    createSite("website.md","../site/");
    return 0;
}