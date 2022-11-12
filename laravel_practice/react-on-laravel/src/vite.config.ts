import { defineConfig } from 'vite';
import laravel from 'laravel-vite-plugin';
import react from '@vitejs/plugin-react';

export default defineConfig({
    plugins: [
        laravel({
            input: [
                'resources/sass/app.scss',
                'resources/ts/application.ts',
            ],
            refresh: true,
        }),
        react(),
    ],
    resolve: {
        alias: {
            '~': '/resources/ts',
        },
    },
    server: {
        host: true,
    }
});
