<h1>Movie一覧</h1>
<a href="{{ route('admin.movies.create') }}">作成</a>

<table border="0.5">
  <tr>
    <th>タイトル</th>
    <th>画像</th>
  </tr>
  @foreach($movies as $movie)
  <tr>
    <th>{{ $movie->title }}</th>
    <th>{{ $movie->image_url }}</th>
    <th><a href="{{ route('admin.movies.show', [$movie->id]) }}">詳細</a></th>
    <th><a href="{{ route('admin.movies.edit.', [$movie->id]) }}">編集</a></th>
    {{-- <th><a href="{{ route('admin.movies.', [$movie->id]) }}">削除</a></th> --}}
  </tr>
  @endforeach
</table>