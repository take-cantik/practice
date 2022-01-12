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
        Movie::ctrate($request);

        return redirect(route('admin.movies.index'));
    }

    public function show($id): View
    {
        $movie = Movie::find($id);

        return view('admin.movies.show')->with('movie', $movie);
    }

    public function edit($id): View
    {
        $movie = Movie::find($id);

        return view('admin.movies.edit')->with('movie', $movie);
    }

    public function update(Request $request, $id): RedirectResponse
    {
        $updateRecest = [
            'title' => $request->title,
            'image_url' => $request->image_url
        ];

        Movie::where('id', $id)->update($updateRequest);

        return redirect(route('admin.movies.show'));
    }

    public function destroy($id): RedirectResponse
    {
        Movie::where('id', $id)->delete();

        return redirect(route('admin.movies.index'));
    }
}
