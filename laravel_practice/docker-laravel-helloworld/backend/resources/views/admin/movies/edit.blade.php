<h1>Edit</h1>
<form action="/admin/movies/{{ $movie->id }}" method="POST">
  @csrf
  <label>タイトル</label>
  <input type="text" name="title" id="title" value="{{ $movie->title }}">
  <label>画像URL</label>
  <input type="text" name="image_url" id="image_url" value="{{ $movie->image_url }}">
  <input type="hidden" name="_method" value="PUT">
  <button type="submit">編集</button>
</form>