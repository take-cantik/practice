FROM ruby:3.1.2

ENV TZ=Asia/Tokyo \
    # locale
    LANG=en_US.UTF-8 \
    LANGUAGE=en_US:en \
    LC_ALL=en_US.UTF-8 \

    # gem environment
    GEM_HOME=/gem \
    BUNDLE_PATH=/gem \
    BUNDLE_BIN=/gem/bin \
    PATH="/gem/bin:${PATH}"


RUN apt-get update && \
    apt-get -y install git libpq-dev libicu-dev libonig-dev libzip-dev unzip locales && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* && \
    rm -rf /var/lib/mysql/ && \
    locale-gen en_US.UTF-8 && \
    localedef -f UTF-8 -i en_US en_US.UTF-8

WORKDIR /work/src

COPY ./src/Gemfile ./Gemfile
COPY ./src/Gemfile.lock ./Gemfile.lock
RUN bundle install

COPY ./src .

COPY entrypoint.sh /usr/bin/
RUN chmod +x /usr/bin/entrypoint.sh
ENTRYPOINT ["entrypoint.sh"]
EXPOSE 3000

CMD ["rails", "server", "-b", "0.0.0.0"]
