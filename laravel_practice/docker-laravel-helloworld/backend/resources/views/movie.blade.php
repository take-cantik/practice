<h1>Movie一覧</h1>

<table>
  <tr>
    <th>タイトル</th>
    <th>画像</th>
  </tr>
  @foreach($movies as $movie)
  <tr>
    <th>{{ $movie->title }}</th>
    <th>{{ $movie->image_url }}</th>
  </tr>
  @endforeach
</table>