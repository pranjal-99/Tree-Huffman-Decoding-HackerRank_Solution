void decode_huff(node * root, string s) {
    // define a static string.
    static string ans;
    node* test = root;
    // Traverse through each char of string and find the node where data!=NULL.
    for( int i = 0; i < s.length(); i++ ) {
        if(s[i]=='1'){
            if(test->right->data !=NULL) {
                ans+=test->right->data;
                test = root;
            }
            else {
                test = test-> right;
            }
        }else {
            if(test->left->data !=NULL) {
                ans+=test->left->data;
                test = root;
            }
            else {
                test = test-> left;
            }
        }
    }
    cout << ans;
}
