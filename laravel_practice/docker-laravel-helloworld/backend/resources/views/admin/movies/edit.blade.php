<h1>Edit</h1>
<form action="/admin/movies/{{ $movie->id }}" method="PUT">
  @csrf
  <label>タイトル</label>
  <input type="text" name="title" id="title" value="{{ $movie->title }}">
  <label>画像URL</label>
  <input type="text" name="image_url" id="image_url" value="{{ $movie->image_url }}">
  <button type="submit">編集</button>
</form>