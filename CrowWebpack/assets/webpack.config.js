const VueLoaderPlugin = require('vue-loader/lib/plugin');

module.exports = {
    entry: './src/index.js',
    output: {
        filename: 'index.js',
        path: `${__dirname}`
    },
    module: {
        rules: [
            {
                test: /\.vue$/,
                use: 'vue-loader'
            },
        ]
    },
    plugins: [
        new VueLoaderPlugin()
    ]
}   