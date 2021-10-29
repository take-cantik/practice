FROM golang:1.17.2

RUN apk add --update --no-cache ca-certificates git

RUN mkdir /go/src/work
WORKDIR /go/src/work

COPY go.mod .
COPY go.sum .
RUN go mod download
COPY . .

EXPOSE 8080

CMD ["go", "run", "main.go"]

