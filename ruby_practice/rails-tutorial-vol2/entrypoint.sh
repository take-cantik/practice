#!/bin/bash
set -e

rm -f /work/src/tmp/pids/server.pid

exec "$@"
