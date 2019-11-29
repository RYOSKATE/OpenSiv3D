Module['preRun'] = function () {
    FS.createFolder(
        '/', // 親フォルダの指定
        'resources', // フォルダ名
        true, // 読み込み許可
        true // 書き込み許可(今回の例はfalseでもよさげ)
    );
    FS.createFolder(
        '/resources', // 親フォルダの指定
        'engine', // フォルダ名
        true, // 読み込み許可
        true // 書き込み許可(今回の例はfalseでもよさげ)
    );
    FS.createFolder(
        '/resources/engine', // 親フォルダの指定
        'shader', // フォルダ名
        true, // 読み込み許可
        true // 書き込み許可(今回の例はfalseでもよさげ)
    );
    FS.createPreloadedFile(
        '/resources/engine/shader', // 親フォルダの指定
        'fullscreen_triangle.frag', // ソース中でのファイル名
        '/resources/engine/shader/fullscreen_triangle.frag', // httpでアクセスする際のURLを指定
        true, // 読み込み許可
        false // 書き込み許可
    );
    FS.createPreloadedFile(
        '/resources/engine/shader',
        'fullscreen_triangle.vert',
        '/resources/engine/shader/fullscreen_triangle.vert',  // httpでアクセスする際のURLを指定
        true,
        false
    );
};