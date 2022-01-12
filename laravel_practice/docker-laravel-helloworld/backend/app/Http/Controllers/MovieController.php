<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Http\RedirectResponse;
use App\Models\Movie;
use Illuminate\View\View;

class MovieController extends Controller
{
    public function index(): View
    {
        $movies = Movie::all();

        return view('admin.movies.index')->with('movies', $movies);
    }

    public function create(): View
    {
        return view('admin.movies.create');
    }

    public function store(Request $request): RedirectResponse
    {
        return redirect(route('admin.movies.index'));
    }

    public function show(Movie $movie): View
    {
        return view('admin.movies.show');
    }

    public function edit(Movie $movie)
    {
        return view('admin.movies.edit');
    }

    public function update(Request $request, Movie $movie)
    {
        return redirect(route('admin.movies.show'));
    }

    public function destroy(Movie $movie)
    {
        return redirect(route('admin.movies.index'));
    }
}
